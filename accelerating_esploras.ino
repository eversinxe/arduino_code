// jacob dinapoli

#include <Esplora.h>

void setup()
{
  Serial.begin(9600);        
}

void loop()
{
  long int xa = Esplora.readAccelerometer(X_AXIS);   
  long int ya = Esplora.readAccelerometer(Y_AXIS);
  long int za = Esplora.readAccelerometer(Z_AXIS);
  float at = sqrt(xa*xa + ya*ya + za*za);           // total acceleration
  Serial.print(xa);
  Esplora.writeRGB(255, 0, 0); //red

  Serial.print('\t');
  Esplora.writeRGB(0, 255, 0);  //green
   
  Serial.print(ya);
  Esplora.writeRGB(0, 0, 255);  //blue
  
  Serial.print('\t');
  Esplora.writeRGB(255, 255, 0);  //yellow
  
  Serial.print(za);
  Esplora.writeRGB(0, 255, 255);  //cyan
  
  Serial.print('\t');
  Esplora.writeRGB(255, 0, 255);  //magenta
  
  Serial.print(at);
  Esplora.writeRGB(255, 255, 255);  //white
  Serial.println();  
    
    // since esplora accelerometer output is in 0 to 1023 range, we can assume that the acceleration during free fall will drop below value 50.
    
    if (at <= 50) {
        Esplora.writeRGB(255,0,0);
    }
    else {
        Esplora.writeRGB(0,0,0);
    }


  delay(10);         
}

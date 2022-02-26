/*
Esplora Music

Press SWITCH 1 and slide the slider at the same time

Created on 22 november 2012
By Enrico Gueli, enrico.gueli@gmail.com
modified 22 Dec 2012
by Tom Igoe
*/

#include <Esplora.h>

// these are the frequencies for the notes from middle C
// to one octave above middle C:
// const int note[] = {
// 262, // C
// 277, // C#
// 294, // D
// 311, // D#
// 330, // E
// 349, // F
// 370, // F#
// 392, // G
// 415, // G#
// 440, // A
// 466, // A#
// 494, // B
// 523  // C next octave
// };

//adding second range of lower octave with one high octave
const int note5[] = {
90, // C
94, // C#
98, // D
102, // D#
108, // E
112, // F
114, // F#
118, // G
122, // G#
124, // A
128, // A#
132, // B
600, // C next octave
};

void setup()
{

}

void loop()
{
// read the button labeled SWITCH_DOWN. If it's low,
// then play a note:
if (Esplora.readButton(SWITCH_DOWN) == LOW) {
int slider = Esplora.readSlider();

// use map() to map the slider's range to the
// range of notes you have:
byte thisNote = map(slider, 0, 1023, 0, 13);
// play the note corresponding to the slider's position:
Esplora.tone(note5[thisNote]);
}
else {
// if the button isn't pressed, turn the note off:
Esplora.noTone();
}
}

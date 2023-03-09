#include "pitches.h"

const int BUZZER_PIN = 9;
int frequency = NOTE_A4;                     // Output frequency of 260 Hz

void setup() 
{
    pinMode(BUZZER_PIN, OUTPUT);
}
// This code will play continuous sound of frequency 260Hz (without stopping)
// THIS IS A DUMMY CODE (Make changes to make the buzzer beep at 1s intervals
void loop()
{
    tone(BUZZER_PIN, frequency);         // Produce a sound of frequency 260HZ
    delay(1000);                        // Delay for 1s while the beep plays - IMPORTANT!
    noTone(BUZZER_PIN);   
    delay(1000);              // Stops the tone already being played
}
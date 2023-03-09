#include "pitches.h"

const int full_note = 2000;    // Full note duration in ms

const int half_note = full_note / 2;
const int quarter_note = full_note / 4;
const int eighth_note  = full_note / 8;    // And so on for 1/2, 1/16 ...
const int sixteenth_note = full_note / 16;
                                                                                                                                               
const int dotted_quarter_note = quarter_note * 1.5;
const int dotted_eighth_note  = eighth_note * 1.5;    // And so on for 1/2, 1/16 ..

const int BUZZER_PIN = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(BUZZER_PIN, NOTE_G4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_A4, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_C5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_B4, sixteenth_note);
  delay(sixteenth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_A4, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_D5, sixteenth_note);
  delay(sixteenth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_C5, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_G5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_E5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_C5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_B4, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_A4, sixteenth_note);
  delay(sixteenth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_F4, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_F5, half_note);
  delay(half_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_E5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_C5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_D5, eighth_note);
  delay(eighth_note * 1.2);
  noTone(BUZZER_PIN);

  tone(BUZZER_PIN, NOTE_C5, sixteenth_note);
  delay(sixteenth_note * 1.2);
  noTone(BUZZER_PIN);



  
 
}

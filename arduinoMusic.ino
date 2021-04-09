#include "pitches.h"

//欢乐斗地主
//定义音高低
short melody[] = {
  NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_A3, NOTE_C4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_D4, NOTE_C4, NOTE_E4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_C4, NOTE_C4, 0, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E3, NOTE_G4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_A4, NOTE_E4, NOTE_D4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_D5, NOTE_C5, NOTE_G4, NOTE_C5, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_G4, NOTE_A4, NOTE_E4, NOTE_G4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G3, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_D4, NOTE_E4, NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_A4, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, 0, 0, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_A4, 0, 0, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_D4, NOTE_E4, NOTE_A3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_C4, 0, 0, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_A4, 0, 0, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_E4, NOTE_A4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_B4, NOTE_G4, NOTE_A4
};

//定义音长，8表示8分音符
byte noteDurations[] = {
  8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 8, 8, 8, 8, 16 / 3, 16, 8, 8, 2, 8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 2, 8, 8, 8, 8, 8, 8, 8, 8, 16 / 3, 16, 8, 8, 2, 8, 16, 16, 8, 8, 8 / 3, 8, 8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8 / 3, 8, 2, 8, 16, 16, 8, 8, 8 / 3, 8, 8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8 / 3, 8 / 3, 4, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 4, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 4, 8, 16, 16, 8, 8, 16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 16, 16, 16, 16, 8, 16, 16, 4, 8, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 4, 8, 16, 16, 8, 8, 16, 16, 16, 16, 4, 8, 16, 16, 8, 8, 16, 16, 16, 16, 8, 16, 16, 16, 16, 16, 16, 8, 8, 8, 8, 4, 32 / 3, 32, 16, 16, 16, 16, 8, 8, 8, 4, 8, 16, 16, 8, 16, 16, 16, 16, 16, 16, 4, 8, 16, 16, 8, 8, 16, 16, 16, 16, 4, 8, 16, 16, 8, 8, 16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 8, 16, 16, 8, 8, 16, 16, 16, 16, 4, 8, 16, 16, 8, 8, 16, 16, 16, 16, 8, 16, 16, 8, 16, 16, 8, 8, 16, 16, 16, 16, 4, 16, 16, 16, 16, 8, 16, 16, 8, 8, 4, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 2, 8, 16, 16, 8, 8, 8, 8, 8, 8, 8, 16, 16, 8, 8, 8 / 3, 16, 16, 8 / 3, 8, 4, 4, 1 / 2, 8, 16, 16, 8, 8, 4, 4, 8, 16, 16, 8, 8, 4, 4, 16 / 3, 16, 8, 8, 4, 4, 1 / 2, 8, 16, 16, 8, 8, 4, 4, 8, 16, 16, 8, 8, 4, 4, 16 / 3, 16, 8, 8, 4, 4, 1 / 2, 16 / 3, 16, 8, 8, 8, 4, 8, 1 / 2
};


int itoneLen;

void setup() {
  itoneLen = sizeof(melody) / sizeof(melody[0]);
  pinMode(LED_BUILTIN, OUTPUT);
  for (int thisNote = 0; thisNote < itoneLen; thisNote++) {

    
    int noteDuration = 1.5 * 1000 / noteDurations[thisNote]; // 全音符音长1.5*1000ms，四分音符则除以4
    
    tone(8, melody[thisNote], noteDuration);  //使用8号引脚

    int pauseBetweenNotes = noteDuration * 1.30;   //响完一个音后的停顿时间
    delay(pauseBetweenNotes);
    noTone(8);

  }
}

void loop() {
  // no need to repeat the melody.
}
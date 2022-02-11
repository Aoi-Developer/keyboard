#include <Keyboard.h>

#define Button1 2
#define Button2 3
#define Button3 5
#define Button4 10
#define Button5 16
#define Button6 4
#define Button7 6

void setup() {
  Keyboard.begin();
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);
  pinMode(Button3, INPUT_PULLUP);
  pinMode(Button4, INPUT_PULLUP);
  pinMode(Button5, INPUT_PULLUP);
  pinMode(Button6, INPUT_PULLUP);
  pinMode(Button7, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(Button1) == LOW){
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button1) == LOW);
  }
  if(digitalRead(Button2) == LOW){
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button2) == LOW);
  }
  if(digitalRead(Button3) == LOW){
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('a');
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button3) == LOW);
  }
  if(digitalRead(Button4) == LOW){
    Keyboard.press(KEY_BACKSPACE);
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button4) == LOW);
  }
  if(digitalRead(Button6) == LOW){
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_ESC);
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button6) == LOW);
  }
  if(digitalRead(Button5) == LOW){
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.press('z');
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button5) == LOW);
  }
  if(digitalRead(Button7) == LOW){
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    delay(100);
    Keyboard.releaseAll();
    while(digitalRead(Button7) == LOW);
  }
  delay(100);
}

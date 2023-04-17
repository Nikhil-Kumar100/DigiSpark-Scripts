#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
 
  

}

void loop() {
  // put your main code here, to run repeatedly:apt-get update
  digitalWrite(1,HIGH);
   Update();
}

void Update(){
   DigiKeyboard.sendKeyStroke(0);
   DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_RIGHT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_RIGHT);
  DigiKeyboard.delay(700);
  DigiKeyboard.println("firefox");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1200);
  DigiKeyboard.sendKeyStroke(KEY_T,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("https://www.youtube.com/watch?v=j9hwT6PGTJ0&list=RDgvBTnnY4Wqw&index=19&ab_channel=ARKO");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1,LOW);
  delay(10000);
}

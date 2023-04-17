#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
 
  

}

void loop() {
  // put your main code here, to run repeatedly:apt-get update
  digitalWrite(1,HIGH);
  delay(100);
  digitalWrite(1,LOW);
  delay(100);
   Update();
}

void Update(){
  DigiKeyboard.sendKeyStroke(0);
   DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_1,MOD_GUI_RIGHT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_1,MOD_GUI_RIGHT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("firefox ");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_T,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("https://www.youtube.com/watch?v=j9hwT6PGTJ0&list=RDgvBTnnY4Wqw&index=19&ab_channel=ARKO");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  delay(10000);
}

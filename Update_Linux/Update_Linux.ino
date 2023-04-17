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
  DigiKeyboard.println("terminal");
   DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("sudo su");
   DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(3000);
  //Enter Your Password
  DigiKeyboard.sendKeyStroke(KEY_0);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_0);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_0); 
  DigiKeyboard.delay(200); 
  DigiKeyboard.sendKeyStroke(KEY_0);
   DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   DigiKeyboard.delay(1000);
  DigiKeyboard.println("apt update && apt upgrade -y && apt dist-upgrade -y && apt clean");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
   digitalWrite(1,LOW);
  delay(10000);
}

//InputModule
//Used for defining and detecting Button Inputs

#include "InputModule.h"
#include <Arduino.h>

void InputSetup() {
  pinMode(button_UP, INPUT_PULLUP); 
  pinMode(button_DOWN, INPUT_PULLUP);
  pinMode(button_LEFT, INPUT_PULLUP);
  pinMode(button_RIGHT, INPUT_PULLUP);
  pinMode(button_A, INPUT_PULLUP);
  pinMode(button_B, INPUT_PULLUP);
  pinMode(photo_A,INPUT);
  pinMode(photo_B,INPUT);
}

// Used for detecting Button pressed values
ButtonState ReadButton(int pin) {
  static bool lastState = HIGH;
  static unsigned long pressTime = 0;

  bool currentState = digitalRead(pin);
  if (lastState == HIGH && currentState == LOW) {
    pressTime = millis();
    lastState = LOW;
    return BUTTON_PRESSED;
  } else if (lastState == LOW && currentState == LOW) {
    if (millis() - pressTime > 500) {
      return BUTTON_HELD;
    }
  } else if (lastState == LOW && currentState == HIGH) {
    lastState = HIGH;
    return BUTTON_RELEASED;
  }
  return BUTTON_IDLE;
}


//Used for defining photo resistor and values, might be modified or replaced later
bool Photo_Change(char photoAorB, int reference_Value,int modifier_change){
  int photoBorA;
  if(photoAorB =='A'){
    photoBorA=photo_A;
  }else{
    photoBorA=photo_B;
  }
  int photoRead;
  photoRead = analogRead(photoBorA); 
  if(photoRead>(reference_Value+modifier_change)){
    return 0;
  }else{
    return 1;
  }
  
}

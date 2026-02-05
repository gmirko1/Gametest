//InputModule
//Used for defining Button Inputs

#ifndef INPUT_MODULE_H
#define INPUT_MODULE_H

#define button_UP 7
#define button_DOWN 2
#define button_LEFT 3
#define button_RIGHT 12

#define button_A 5
#define button_B 6    
#define photo_A A0
#define photo_B A1

enum ButtonState {
  BUTTON_IDLE,
  BUTTON_PRESSED,
  BUTTON_HELD,
  BUTTON_RELEASED
};

void InputSetup();
ButtonState ReadButton(int pin);
bool Photo_Change(char photoAorB, int reference_Value,int modifier_change);

#endif

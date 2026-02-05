// DisplayModule
//Handles all TFT Display initializations

#ifndef DISPLAY_MODULE_H
#define DISPLAY_MODULE_H

#include <TFT_ILI9163C.h>

// Predefined colour values. It makes it easier to write colour names in the code later then to write the colour values
#define BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0  
#define WHITE   0xFFFF

// Pins used for the TFT SPI 128x128 Display
#define __CS 10
#define __DC 9
#define __RST 8

//Quick named values for using Display limits
extern uint16_t Max_X;
extern uint16_t Max_Y;
extern uint16_t Min_X;
extern uint16_t Min_Y;
extern uint16_t center_X;
extern uint16_t center_Y;

extern TFT_ILI9163C tft;

void DisplaySetup();
void DrawTitleScreen(uint16_t color, int text_size, const char* title, bool show_button_text);
void UpdateFlicker();
void DisplaySize(int HorizontalSize,int VerticalSize);

#endif

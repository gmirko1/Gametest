//DisplayModule
//Handles all TFT Display initializations and drawing on the display

#include "DisplayModule.h"

TFT_ILI9163C tft = TFT_ILI9163C(__CS, __RST, __DC);

unsigned long lastToggleTime = 0;
uint16_t flickerColor = BLACK;

uint16_t Max_X;
uint16_t Max_Y;
uint16_t Min_X = 0;
uint16_t Min_Y = 0;
uint16_t center_X;
uint16_t center_Y;

void DisplaySetup() {
  tft.begin();
  tft.setRotation(2);
  tft.fillScreen(BLACK);
}

void DrawTitleScreen(uint16_t color, int text_size, const char* title, bool show_button_text){
  tft.setCursor(2, 8);
  tft.setTextColor(color, BLACK);
  tft.setTextSize(text_size);
  tft.setTextWrap(true);
  tft.print(title);

  if (show_button_text) {
    tft.setCursor(15, 100);
    tft.setTextColor(WHITE, BLACK);
    tft.setTextSize(1);
    tft.print("Press A to start");
  } else {
    tft.fillRect(15, 100, 120, 10, BLACK);
  }
}
//Custom funtion used to display the title screen flicker text: "Press A to start". Commonly used in retro videogames
void UpdateFlicker() {
  if (millis() - lastToggleTime > 700) {
    lastToggleTime = millis();
    flickerColor = (flickerColor == BLACK) ? WHITE : BLACK;
    tft.setCursor(15, 100);
    tft.setTextColor(flickerColor);
    tft.setTextSize(1);
    tft.print("Press A to start");

    tft.setTextColor(flickerColor, BLACK);
    tft.fillRect(15, 100, 120, 10, BLACK); 
    tft.setCursor(15, 100);
    tft.print("Press A to start");

  }
}

//Sets the Display size and defines the other parameters (such as Max or Min screen size extc.)
void DisplaySize(int HorizontalSize,int VerticalSize){
  Max_X=HorizontalSize-1;
  Max_Y=VerticalSize-1; 
  center_X=HorizontalSize/2;
  center_Y=VerticalSize/2;
}

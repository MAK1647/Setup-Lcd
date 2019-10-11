#include <LiquidCrystal_I2C.h>
#include "setstring.h"
// set the LCD number of columns and rows
int lcdColumns = 16;
int lcdRows = 2;


// set LCD address, number of columns and rows
// if you don't know your display address, run an I2C scanner sketch
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows );  

void setup(){
  // initialize LCD
  lcd.init();
  // turn on LCD backlight                      
  lcd.backlight();
}

void loop(){
  // set cursor to first column, first row
  char a[]="Hello World!";
  char c[]="HELLO 2!";
  //char b[100];
  int b=0;
  b=substr(a,c);
  lcd.setCursor(0, 0);
  // print message
  lcd.print(a);
  delay(1000);
  // clears the display to print new message
  lcd.clear();
  // set cursor to first column, second row
  lcd.setCursor(0,1);
  lcd.print(c);
  delay(1000);
  lcd.clear(); 
}


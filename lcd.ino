
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("NIELIT Patna");
  lcd.setCursor(1,1);
  lcd.print("IoT");
}

void loop()
{
}

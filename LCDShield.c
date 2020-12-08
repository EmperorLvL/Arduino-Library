#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.setCursor(0,1);
  lcd.print("Press Key:");
}

void loop() {
  int x = analogRead(0);
  const double y = 0.0048875855327468;
  
  lcd.setCursor(10,1);
  
  if (x < 60) {
    lcd.print("Right ");
    lcd.setCursor(0,0);
    lcd.print(static_cast<String>(static_cast<double>(x * y)) + " Volt");
  }
  else if (x < 200) {
    lcd.print ("Up    ");
    lcd.setCursor(0,0);
    lcd.print(static_cast<String>(static_cast<double>(x * y)) + " Volt");
  }
  else if (x < 400){
    lcd.print ("Down  ");
    lcd.setCursor(0,0);
    lcd.print(static_cast<String>(static_cast<double>(x * y)) + " Volt");
  }
  else if (x < 600){
    lcd.print ("Left  ");
    lcd.setCursor(0,0);
    lcd.print(static_cast<String>(static_cast<double>(x * y)) + " Volt");
  }
  else if (x < 800){
    lcd.print ("Select");
    lcd.setCursor(0,0);
    lcd.print(static_cast<String>(static_cast<double>(x * y)) + " Volt");
  } 
}

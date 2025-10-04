#include <LiquidCrystal_I2C.h>

const int col = 16;
const int row = 2;
LiquidCrystal_I2C lcd(0x27, col, row);

int position = 0;

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void runAnimation()
{
  for (position = 0; position < col; position++)
  { // -6 biar "Jikalau" muat
    lcd.clear();
    lcd.setCursor(position, 0);
    lcd.print("Ayo");
    lcd.setCursor(position, 1);
    lcd.print("Shalat");
    delay(400);
  }
  lcd.clear();
  delay(2000); // berhenti sebentar setelah animasi selesai
}

void showMessages()
{
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Pergi");
  delay(900);

  lcd.setCursor(4, 1);
  lcd.print("Sekarang");
  delay(900);

  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Guys");
  lcd.setCursor(4, 1);
  lcd.print("<3");
  delay(1000);

  lcd.clear();
}

void loop()
{
  runAnimation(); // jalankan animasi dulu
  showMessages(); // setelah selesai, tampilkan pesan
}
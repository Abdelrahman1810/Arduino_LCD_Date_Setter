#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4
);
const int move[] = {2,3,4,5};
int i, count=0;
char date[] = "00/00/0000";

void setup() {
  Serial.begin(9600);
  for(i=0;i<4;i++)
    pinMode(move[i], INPUT);

  lcd.begin(16,2);
  lcd.backlight();
  lcd.setCursor(6,0);
  lcd.print("Date");
  lcd.setCursor(3,1);
  lcd.print(date);

}

void loop() {
  for(i=0;i<4;i++)
  {
    if(digitalRead(move[i]))
    {
      while(digitalRead(move[i]));
      if(i==0)
        --count -= bool((count==2)||(count==5));
      else if(i==1)
        date[count] = ((date[count]=='9')? '0':(++date[count]));
      else if(i==2)
        date[count] = ((date[count]=='0')? '9':(--date[count]));
      else if(i==3)
        ++count += bool((count==2)||(count==5));

      conditions();
      flash();
    }
  lcd.setCursor(3, 1);
  lcd.print(date);
  }
}

void conditions()
{
  if(count<0) count=9;
  if(count>9) count=0;
  if(date[3]>'1') date[3]='0';
  if(date[3]<'0') date[3]='1';
  if(date[0]>'3') date[0]='3';
  if(date[3]=='1'&&date[4]>'2') date[4]='0';
  if(date[0]=='3'&&date[1]>'1') date[1]='1';
}

void flash()
{
  for(i=0; i<2; i++)
  {
    lcd.setCursor(3, 1);
    lcd.print(date);
    delay(100);
    lcd.setCursor(count+3, 1);
    lcd.print(" ");
    delay(50);
  }
}
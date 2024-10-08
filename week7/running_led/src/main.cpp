#include <Arduino.h>
void setup()
{
  // set pin 22 sbg output
  pinMode(22, OUTPUT);
  // set pin 23 sbg input
  pinMode(23, INPUT_PULLUP);
}

void loop()
{
  // jika tombol ditekan, maka nyalakan led/kedipkan led
  if (digitalRead(23) == LOW)
  {
    for (int i = 0; i < 10; i++)
    {
      digitalWrite(22, HIGH);
      delay(500);
      digitalWrite(22, LOW);
      delay(500);
    }
  }
  // jika tombol dilepas, maka matikan led
  if (digitalRead(23) == HIGH)
  {
    digitalWrite(22, LOW);
  }
}

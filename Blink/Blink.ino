/*
  Blink
  
  Developer: Cohen Smith
  Date 2.16.2026

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

int buzzer = 11;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {

  // Siren going up (lower pitch range)
  for (int freq = 400; freq <= 900; freq += 8) {

    tone(buzzer, freq);

    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(40);

    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(40);
  }

  // Siren going down
  for (int freq = 900; freq >= 400; freq -= 8) {

    tone(buzzer, freq);

    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(40);

    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(40);
  }
}




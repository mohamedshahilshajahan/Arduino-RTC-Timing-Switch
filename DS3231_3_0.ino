#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc;

const int relay = A3;
bool on = LOW;
bool off = HIGH;

void setup() {
  Serial.begin(9600);

  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC.  Check your connections!");
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, setting the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  pinMode(relay, OUTPUT);
  digitalWrite(relay, off);
}

void loop() {
  DateTime now = rtc.now();
  int currentHour = now.hour();
  int currentMinute = now.minute();

  Serial.print("Current time: ");
  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.println(now.second(), DEC);

  //Specify the desired timing for your preference.             #Configure the activation time for the relay.
  if ((currentHour == 17 && currentMinute >= 40) || (currentHour >= 18 && currentHour < 24) || (currentHour >= 0 && currentHour < 6)) {
    digitalWrite(relay, on);
  } else {
    digitalWrite(relay, off);
  }

  delay(1000);
}

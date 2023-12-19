#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc;

const int relay = A3;
bool on = LOW;
bool off = HIGH;

void setup() {
  Serial.begin(9600);

  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
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
  int currentSecond = now.second();

  Serial.print("Current time: ");
  Serial.println(now.timestamp());

  if (currentHour == 17 && currentMinute == 40 && currentSecond == 0) {
    digitalWrite(relay, on);
    delay(1000); // Delay to ensure the relay is toggled only once
  }
  if (currentHour == 6 && currentMinute == 0 && currentSecond == 0) {
    digitalWrite(relay, off);
    delay(1000); // Delay to ensure the relay is toggled only once
  }

  delay(1000);
}

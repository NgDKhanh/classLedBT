#include "Arduino.h"
#include "ledDriver.h"
ledDriver::ledDriver(int ledSetPin) {
  this->ledPin = ledSetPin;
  pinMode(this->ledPin, OUTPUT);
}
void ledDriver::init() {
    pinMode(this->ledPin, OUTPUT);

}
void ledDriver::turnOn() {
  digitalWrite(this->ledPin, LOW);
}
void ledDriver::turnOff() {
  digitalWrite(this->ledPin, HIGH);
}
bool ledDriver::isOn() {
  if(digitalRead(this->ledPin) == LOW)
  {
    return true;
  }
  else
    return false;
}

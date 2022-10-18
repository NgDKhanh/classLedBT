#include "Arduino.h"
#include "ButtonDriver.h"
ButtonDriver::ButtonDriver(int btSetPin) {
  this->btPin = btSetPin;
  pinMode(this->btPin, INPUT);
}
void ButtonDriver::init() {
    pinMode(this->btPin, INPUT);

}
int ButtonDriver::getState() {
   this->state = digitalRead(this->btPin);
   if(this->state == 0)
    return 1;
   else
    return 0;
}

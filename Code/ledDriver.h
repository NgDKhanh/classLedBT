#pragma once
#ifndef ledDriver_h
#define ledDriver_h

#include "Arduino.h" 

class ledDriver {
private:
    int ledPin;
public:
    ledDriver(int ledSetPin);
    void init();
    void turnOn();
    void turnOff();
    bool isOn();
};


#endif

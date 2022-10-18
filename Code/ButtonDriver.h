#pragma once
#ifndef ButtonDriver_h
#define ButtonDriver_h

#include "Arduino.h" 

class ButtonDriver {
private:
    int btPin;
    bool state;
public:
    ButtonDriver(int btSetPin);
    void init();
    int getState();
};


#endif

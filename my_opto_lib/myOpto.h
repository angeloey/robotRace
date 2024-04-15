// Angelo Maoudis 14074479
// Angelo rotaryEncoder
#pragma once

#include "PinNames.h"
#include "mbed.h"
#include <cstdint>
#include <functional>

class Opto {
public:

    // Mbed requires using Mbed::Callback<> instead of std::function<> 
    Opto(PinName optoIn, Callback<void(void)> optoFunc);


private:

    void doSomething(void);

    InterruptIn _optoIn;
    std::function<void(void)> _optoFunc;

};
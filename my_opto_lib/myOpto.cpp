// Angelo Maoudis 14074479
// Angelo rotaryEncoder
#include "myOpto.h"
#include "PinNamesTypes.h"
#include <cstdio>

Opto::Opto(PinName optoIn, Callback<void(void)> optoFunc):_optoIn(optoIn),_optoFunc(optoFunc){

        // Call function passed here when opto triggered
    _optoIn.rise(optoFunc);

}


void Opto::doSomething(void){

}
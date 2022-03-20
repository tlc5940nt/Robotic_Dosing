#include "FastAccelStepper.h"

// As in StepperDemo for Motor 1 on AVR
#define dirPinStepper    7
#define stepPinStepper   6  

// As in StepperDemo for Motor 1 on ESP32
//#define dirPinStepper 18
//#define enablePinStepper 26
//#define stepPinStepper 17

FastAccelStepperEngine engine = FastAccelStepperEngine();
FastAccelStepper *stepper = NULL;

void setup() {
  engine.init();
  stepper = engine.stepperConnectToPin(stepPinStepper);
  if (stepper) {
    stepper->setDirectionPin(dirPinStepper);


    stepper->setSpeedInHz(2000);  // 1-8000
    stepper->setAcceleration(500000);

       stepper->moveTo(750, true);
    
  }
}

void loop() {

}

# Robitic_Dosing

What it is:
Robitic_Dosing is being developed to use commercial off the shelf components and easily 3d printed custom parts to create a device which can expel precise ammounts of liquid from a dribble to a flood. Ideal max flowrate is around 50mL/s.

How it works:
Using a nema23 stepper motor and acme leadscrew, the device compresses the plunger on a 500mL syringe an specified distance at a specified speed. There are 3 limit switches on the device to allow for homing to both the front and rear as well as detect when a syringe is touching the motor carrier. 

TODO:

* Impliment limit switches for homing both directions as well as total stroke length
* Impliment plunger detect switch for easier insertion and removal of syringe
* Cut down on stress plate size
* Choose a controller for OSSM integration

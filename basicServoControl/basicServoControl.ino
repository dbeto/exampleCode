///basic servo control from an analog sensor
#include <Servo.h> 

Servo servo1;  //create the servo object


int sensor1inputPin = 0; //the analog pin the sensor is attached to
int servo1outputPin = 5; //the pin controlling servo

int sensor1RawValue; //variable that will hold the raw value from the sensor
int sensor1ConvValue; // variable that will hold the converted output value

void setup()
{
servo1.attach(servo1outputPin,500,2500);
}


void loop()
{
sensor1RawValue=analogRead(sensor1inputPin); //read the sensor
sensor1ConvValue=map(sensor1RawValue,0,1023,0,180); // convert from 0 - 1023 to 0-180

servo1.write(sensor1ConvValue);
}

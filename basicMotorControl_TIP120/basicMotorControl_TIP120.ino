///basic motor control with a TIP120 transistor


int sensor1inputPin = 0; //the analog pin the sensor is attached to
int motor1outputPin = 3; //the pin controlling the transistor

int sensor1RawValue; //variable that will hold the raw value from the sensor
int sensor1ConvValue; // variable that will hold the converted output value

void setup()
{
pinMode(motor1outputPin, OUTPUT);   
}


void loop()
{
sensor1RawValue=analogRead(sensor1inputPin); //read the sensor
sensor1ConvValue=map(sensor1RawValue,0,1023,0,255); // convert from 0 - 1023 to 0-255

analogWrite(motor1outputPin, sensor1ConvValue);//write the value
}

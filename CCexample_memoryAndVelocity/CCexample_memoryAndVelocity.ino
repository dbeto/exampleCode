

int inputPin1 = 0;
int inputPin2 = 1;

int outputPin1 = 3;
int outputValue1;
int inputValue1;
int outputValue2;
int inputValue2;

int prevVal;
float velocity;

int maxVelocity = 12;//this is a randomly picked number - would be determined from testing.

void setup()
{
pinMode(outputPin1, OUTPUT);

Serial.begin(9600);
}



void loop()
{

inputValue2 = analogRead(inputPin2);

velocity = abs(inputValue2-prevVal);//check the current sensor value against the previous to determine the velocity of change
                                    //use the absolute value function to measure only change without + or - numbers
Serial.println("velocity: "+velocity);
Serial.println("sensorVal: "+inputValue2);

outputValue1 = map(velocity, 0, maxVelocity, 0, 255);


analogWrite(outputPin1, outputValue1);


///////////////////////////////////////

prevVal=inputValue2;//save the current reading from the sensor to compare next loop cycle
}

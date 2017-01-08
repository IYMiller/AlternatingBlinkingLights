/********************************************************           
* Alternating Blinking Lights                          *   
*                                                      *   
* Author:  Isabella Miller                             *   
*                                                      *   
* Purpose:  Demonstration of a simple program.         *   
*                                                      *   
********************************************************/

// Global Variables
int LedPin1 = 5; //Blue LED, left LED
int LedPin2 = 6; //Red LED, right LED
int PotentiometerPin = A0; //This value controls blink speed
float PotentiometerReading = 0; //The potentiometer value, 0-1023
float MaxDelayTime = 500; //Max time delay milliseconds

void setup() {
  //Initialize pins
  pinMode(LedPin1, OUTPUT); //Starts out low
  pinMode(LedPin2, OUTPUT); //Starts out low
}

void loop() {
  //Reading the potentiometer value
  PotentiometerReading = analogRead(PotentiometerPin);

  //Turn on Blue LED, turn off red LED
  digitalWrite(LedPin1, HIGH);
  digitalWrite(LedPin2, LOW);

  //Pause for a bit
  delay((PotentiometerReading/1023)*MaxDelayTime);

  //Turn off Blue LED, turn on red LED
  digitalWrite(LedPin1, LOW);
  digitalWrite(LedPin2, HIGH);

  //Pause for a bit
  delay((PotentiometerReading/1023)*MaxDelayTime);
}

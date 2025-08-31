#include <Servo.h>

Servo myservo;  

const int buttonPin = 7;
int buttonState = 0; 

void setup()

{  
  pinMode(buttonPin, INPUT_PULLUP); 
  myservo.attach(9); 
  myservo.write(0);

}

void loop()

{

  buttonState = digitalRead(buttonPin);  //buttonState reads the state of the buttonPin
  
    if (buttonState == LOW) // code to be executed when button is pressed 
    {
      for(int i = 0; i < 2; i++){
        for (int pos = 60; pos <= 100; pos += 1) {  // rotate slowly from 60 degrees to 100 degrees, one by one degree
          // in steps of 1 degree
          myservo.write(pos);  // control servo to go to position in variable 'pos'
          delay(10);         // waits 10ms for the servo to reach the position
        }
        for (int pos = 100; pos >= 60; pos -= 1) {  // rotate slowly from 100 degrees to 60 degrees, one by one degree
          // in steps of 1 degree
          myservo.write(pos);  // control servo to go to position in variable 'pos'
          delay(10);         // waits 10ms for the servo to reach the position
        
        }
      }             
    }
}
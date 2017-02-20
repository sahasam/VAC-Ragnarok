#include <Servo.h>
Servo myServo;

void setup() {
  myServo.attach(9);		//declare a servo to pin 9
  Serial.begin(9600);		//Start the serial monitor
  myServo.write(0);		//Set the Servo to the '0' degree
  Serial.println(myServo.read()); //Print the value of the servo
  delay(1000);			//Add a 1 second delay before starting the turn
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i<=180;i++) {	//Turn the servo 180 degrees CW
    myServo.write(i);
    delay(0);
  }

  for(int i = 180;i>= 0;i--) {	//Turn the servo 180 degrees CCW
    myServo.write(i);
    delay(0);
  }
}

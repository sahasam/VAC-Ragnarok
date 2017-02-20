#include <IRremote.h>

int RECV_PIN = 11; 		//make a constant to denote the IR pin
IRrecv irrecv(RECV_PIN);	//Declare a IR-reciever at RECV-PIN
decode_results results;		//Create a variable to hold IR hex values

void setup()
{
  Serial.begin(9600);		//Start the Serial Monitor
  irrecv.enableIRIn(); 		// Start the receiver
  //pinMode(led, OUTPUT);	
}

void loop()
{
  if (irrecv.decode(&results))	//If the IR-Reciever was triggered
    {
     Serial.println(results.value, HEX); //Print the hex value directly to the monitor
     /*
     if(results.value == 0xFFA25D) {
        Serial.println("Made it");
        if(digitalRead(led) == LOW)
          digitalWrite(led,HIGH);
        else
          digitalWrite(led,LOW);
     }*/ 
     irrecv.resume(); 		// Receive the next value
    }
}

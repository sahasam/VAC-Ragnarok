#include <IRremote.h>

int RECV_PIN = 11;
//int led = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  //pinMode(led, OUTPUT);
}

void loop()
{
  if (irrecv.decode(&results))
    {
     Serial.println(results.value, HEX);
     /*
     if(results.value == 0xFFA25D) {
        Serial.println("Made it");
        if(digitalRead(led) == LOW)
          digitalWrite(led,HIGH);
        else
          digitalWrite(led,LOW);
     }*/ 
     irrecv.resume(); // Receive the next value
    }
}

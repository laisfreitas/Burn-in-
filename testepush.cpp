#include <arduino.h>

void setup (){
    Serial.begin(9600);
}

void loop(){
    Serial.print("Olá Burn In");
    Delay(1000);
}
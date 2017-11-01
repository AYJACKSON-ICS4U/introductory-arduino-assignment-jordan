    /* LEDLightSwitch */

const byte LEDpin = 3;
const byte SWITCHpin = 2;

byte LEDstate = LOW;
byte SWITCHstate;
byte lastSWITCHstate;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
// turn on pullup resistor
digitalWrite(SWITCHpin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
SWITCHstate = digitalRead(SWITCHpin);

//checks if light was previously on
if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
{
  //TURNS LIGHT OFF
    LEDstate = LEDstate;
}
//checks if light was previously off
else if ((lastSWITCHstate == LOW) && (SWITCHstate ==HIGH)){
  //turns light on
  LEDstate = !LEDstate;
}
digitalWrite(LEDpin, LEDstate);
lastSWITCHstate = SWITCHstate;
}

    /* SimpleToggle_PB_LED */

const byte LEDpin = 3;
const byte SWITCHpin = 2;

byte LEDstate = LOW;
byte SWITCHstate;
byte lastSWITCHstate = HIGH;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
// turn on pullup resistor
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
  //add delay before code is run (1 second)
   delay(100);
  SWITCHstate = digitalRead(SWITCHpin);
  
   
  if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
  {
    //TURNS LIGHT ON AND OFF
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
    
  }
  lastSWITCHstate = SWITCHstate;
}

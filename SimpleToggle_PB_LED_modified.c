    /* SimpleToggle_PB_LED */
//set constants
const byte LEDpin = 3;
const byte SWITCHpin = 2;

//declare variables
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
  //add delay before code is run (1/20 of a second)
  delay(50);
  SWITCHstate = digitalRead(SWITCHpin);
  
  //change the state of the LED
  if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
  {
    //TURNS LIGHT ON AND OFF
    LEDstate = !LEDstate;
    digitalWrite(LEDpin, LEDstate);
  }
  lastSWITCHstate = SWITCHstate;
}

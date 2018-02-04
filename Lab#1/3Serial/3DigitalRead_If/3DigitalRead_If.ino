// digital pin 8 has a pushbutton attached to it. Give it a name:
int pushButton = 8;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  if(buttonState == 1)
  {
   Serial.println("Button Pressed"); 
   Serial.print("buttonState"); 
   Serial.println(buttonState);   
  }
  if(buttonState == 0)
  {
   Serial.println("Button is OFF"); 
   Serial.print("buttonState"); 
   Serial.println(buttonState);   
  }
  delay(1000);
}

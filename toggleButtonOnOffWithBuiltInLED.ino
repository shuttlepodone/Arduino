int LEDState=0;
int LEDPin=13;
int buttonPin=12;
int buttonNew;
int buttonOld=1;
int dt=100;

void setup() {
Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
}

void loop() {
  buttonNew=digitalRead(buttonPin);
  if (buttonOld==0 && buttonNew==1){
    if (LEDState==0){
      digitalWrite(LED_BUILTIN, HIGH);
      LEDState=1;
    }
    else{
      digitalWrite(LED_BUILTIN, LOW);  
      LEDState=0;
    }
  }
buttonOld=buttonNew;
delay(dt);
Serial.print("Your button is: ");
Serial.println(buttonNew);

}
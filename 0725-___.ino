#define LED 12
#define BUTTON 7

void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON)==HIGH){
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  }
} 

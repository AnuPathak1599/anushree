 int dir=1; 
 byte pwmL = 5; 
 byte pwmR =4; 
 byte inL = 6; 
 byte inR = 3;

 void setup() {
  Serial.begin(9600);
  pinMode(inL, OUTPUT);
  pinMode(inR, OUTPUT);
  pinMode(pwmR, OUTPUT);
  pinMode(pwmL, OUTPUT);
 }

 void loop() {
digitalWrite(inL,LOW);
digitalWrite(inR,LOW);
analogWrite(pwmL,0);
analogWrite(pwmR,0);

Serial.println("Wait");
delay(100);

 digitalWrite(inL, HIGH);
 digitalWrite(inR,HIGH);
 analogWrite(pwmL, 60);
 analogWrite(pwmR, 60);

Serial.println("Move Forward");
 delay(100);
 }


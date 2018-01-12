byte pwm = 8;  
byte in1 = 35; 
byte in2 = 37; 

void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(37,OUTPUT);
  digitalWrite(pwm,LOW);
}

void loop() {
 digitalWrite(in1, HIGH);
 digitalWrite(in2, LOW);
 analogWrite(pwm, 80);
 Serial.println("Move forward");

}

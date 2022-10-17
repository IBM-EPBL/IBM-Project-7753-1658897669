void setup(){
  pinMode(A0, INPUT);
  pinMode(8,OUTPUT);
  pinMode(13, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop(){
  int a=analogRead(A0);
  int b=analogRead(A1);
  int m=map(b,3,405,1,100);  
  if(a<20 && m<40){
  digitalWrite(12,1);
  Serial.println("MOTOR ON");
    tone(13,450);
    delay(500);
    digitalWrite(8,HIGH);
    delay(10);
    }
  else
  {
  digitalWrite(12,0);
  Serial.println("MOTOR off");
    noTone(13);
    digitalWrite(8,LOW);
    delay(500);
  }
}
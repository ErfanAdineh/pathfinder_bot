#definde LS 2
#definde RS 3

#definde LM1 4
#definde LM2 5
#definde RM1 6
#definde RM2 7

void setup() {
  for (int i = 2; i<=3 ; i++){
    pinMode(i,INPUT);
  }
  for (int i = 4; i<=7 ;i++){
    pinMode(i,OUTPUT)
  }
}

void loop() {
  if(digitalRead(LS) && digitalRead(RS)){
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
  }
  if(!digitalRead(LS) && !digitalRead(RS)){
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
  }
    if(!digitalRead(LS) && digitalRead(RS)){
    digitalWrite(RM1,LOW);
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,HIGH);
    digitalWrite(LM2,LOW);
  }
    if(digitalRead(LS) && !digitalRead(RS)){
    digitalWrite(RM1,HIGH);
    digitalWrite(RM2,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LM2,LOW);
  }
}

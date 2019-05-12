int a1=A0;
int a2=A1;
int a3=A2;
int a4=A3;
int c1=0;
int c2=1;
int c3=2;
int c4=3;
int c5=4;
int c6=5;
int c7=6;
int c8=7;
int c9=8;
int c10=9;
int c11=10;
int c12=11;
int c13=12;
int c14=13;
int c15=A4;
int c16=A5;
int anode[]={a1,a2,a3,a4};
void setup() {
  Serial.begin(9600);
  pinMode(c1,OUTPUT);
  pinMode(c2,OUTPUT);
  pinMode(c3,OUTPUT);
  pinMode(c4,OUTPUT);
  pinMode(c5,OUTPUT);
  pinMode(c6,OUTPUT);
  pinMode(c7,OUTPUT);
  pinMode(c8,OUTPUT);
  pinMode(c9,OUTPUT);
  pinMode(c10,OUTPUT);
  pinMode(c11,OUTPUT);
  pinMode(c12,OUTPUT);
  pinMode(c13,OUTPUT);
  pinMode(c14,OUTPUT);
  pinMode(c15,OUTPUT);
  pinMode(c16,OUTPUT);
  pinMode(anode[0],OUTPUT);
  pinMode(anode[1],OUTPUT);
  pinMode(anode[2],OUTPUT);
  pinMode(anode[3],OUTPUT);

}

void loop()
{
  int i;
  analogWrite(anode[0],0);
  analogWrite(anode[1],0);
  analogWrite(anode[2],0);
  analogWrite(anode[3],0);
  digitalWrite(c16,255);
  digitalWrite(c15,255);
  digitalWrite(c14,HIGH);
  digitalWrite(c13,HIGH);
  digitalWrite(c12,HIGH);
  digitalWrite(c11,HIGH);
  digitalWrite(c10,HIGH);
  digitalWrite(c9,HIGH);
  digitalWrite(c8,HIGH);
  digitalWrite(c7,HIGH);
  digitalWrite(c6,HIGH);
  digitalWrite(c5,HIGH);
  digitalWrite(c4,HIGH);
  digitalWrite(c3,HIGH);
  digitalWrite(c2,HIGH);
  digitalWrite(c1,HIGH);
  //for R
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c12,LOW);
    digitalWrite(c10,LOW);
    digitalWrite(c11,LOW);
    digitalWrite(c6,LOW);
    digitalWrite(c2,LOW);
    digitalWrite(c8,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c12,HIGH);
    digitalWrite(c10,HIGH);
    digitalWrite(c11,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c2,HIGH);
    digitalWrite(c8,HIGH);
  }
  //for O
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c15,0);
    analogWrite(c16,0);
    digitalWrite(c12,LOW);
    digitalWrite(c14,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c10,LOW);
    digitalWrite(c7,LOW);
    digitalWrite(c6,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c15,255);
    analogWrite(c16,255);
    digitalWrite(c12,HIGH);
    digitalWrite(c14,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c10,HIGH);
    digitalWrite(c7,HIGH);
    digitalWrite(c6,HIGH);
  }
  //for B
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c15,0);
    analogWrite(c16,0);
    digitalWrite(c12,LOW);
    digitalWrite(c14,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c11,LOW);
    digitalWrite(c10,LOW);
    digitalWrite(c7,LOW);
    digitalWrite(c6,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c15,255);
    analogWrite(c16,255);
    digitalWrite(c12,HIGH);
    digitalWrite(c14,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c11,HIGH);
    digitalWrite(c10,HIGH);
    digitalWrite(c7,HIGH);
    digitalWrite(c6,HIGH);
  }
  //for O
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c15,0);
    analogWrite(c16,0);
    digitalWrite(c12,LOW);
    digitalWrite(c14,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c10,LOW);
    digitalWrite(c7,LOW);
    digitalWrite(c6,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c15,255);
    analogWrite(c16,255);
    digitalWrite(c12,HIGH);
    digitalWrite(c14,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c10,HIGH);
    digitalWrite(c7,HIGH);
    digitalWrite(c6,HIGH);
  }
  //for V
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c12,LOW);
    digitalWrite(c10,LOW);
    digitalWrite(c7,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c12,HIGH);
    digitalWrite(c10,HIGH);
    digitalWrite(c7,HIGH);
  }
  //for I
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c11,LOW);
    digitalWrite(c6,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c7,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c11,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c7,HIGH);
  }
  //for T
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c11,LOW);
    digitalWrite(c7,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c11,HIGH);
    digitalWrite(c7,HIGH);
  }
  //for I
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c11,LOW);
    digitalWrite(c6,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c7,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c11,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c7,HIGH);
  }
  //for C
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c10,LOW);
    digitalWrite(c6,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c7,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c10,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c7,HIGH);
  }
  //for S
  for(i=3;i>=0;i--)
  {
    analogWrite(anode[i],255);
    analogWrite(c16,0);
    analogWrite(c15,0);
    digitalWrite(c14,LOW);
    digitalWrite(c11,LOW);
    digitalWrite(c6,LOW);
    digitalWrite(c8,LOW);
    digitalWrite(c7,LOW);
    delay(600);
    analogWrite(anode[i],0);
    analogWrite(c16,255);
    analogWrite(c15,255);
    digitalWrite(c14,HIGH);
    digitalWrite(c11,HIGH);
    digitalWrite(c6,HIGH);
    digitalWrite(c8,HIGH);
    digitalWrite(c7,HIGH);
  }
}

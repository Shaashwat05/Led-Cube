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
int arr1[]={a1,a2,a3,a4,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16};
int arr2[]={a1,a2,a3,a4};
int arr3[]={c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16};
void setup() {
  Serial.begin(9600);
  for(int i=0;i<20;i++)
  {
    pinMode(arr1[i],OUTPUT);
  }

}

void loop() {
  for(int i=0;i<4;i++)
  {
    digitalWrite(arr1[i],0);
  }
  for(int i=4;i<20;i++)
  {
    digitalWrite(arr1[i],HIGH);
  }
  
  randompattern1();
  randompattern2();
  randompattern3();

}
void randompattern1()
{
  for(int i=0;i<4;i++)
  {
    digitalWrite(arr2[i],255);
  }
  for(int j=0;j<16;j++)
  {
    digitalWrite(arr3[j],LOW);
    delay(400);
    digitalWrite(arr3[j],HIGH);
  }
  for(int i=0;i<4;i++)
  {
    digitalWrite(arr2[i],0);
  }
}
void randompattern2()
{
   for(int i=0;i<4;i++)
  {
    digitalWrite(arr2[i],255);
  }
  
    digitalWrite(c1,LOW);
    delay(400);
    digitalWrite(c1,HIGH);
    digitalWrite(c2,LOW);
    delay(400);
    digitalWrite(c2,HIGH);
    digitalWrite(c3,LOW);
    delay(400);
    digitalWrite(c3,HIGH);
    digitalWrite(c4,LOW);
    delay(400);
    digitalWrite(c4,HIGH);
    digitalWrite(c8,LOW);
    delay(400);
    digitalWrite(c8,HIGH);
    digitalWrite(c12,LOW);
    delay(400);
    digitalWrite(c12,HIGH);
    digitalWrite(c16,LOW);
    delay(400);
    digitalWrite(c16,HIGH);
    digitalWrite(c15,LOW);
    delay(400);
    digitalWrite(c15,HIGH);
    digitalWrite(c14,LOW);
    delay(400);
    digitalWrite(c14,HIGH);
    digitalWrite(c13,LOW);
    delay(400);
    digitalWrite(c13,HIGH);
    digitalWrite(c9,LOW);
    delay(400);
    digitalWrite(c9,HIGH);
    digitalWrite(c5,LOW);
    delay(400);
    digitalWrite(c5,HIGH);
    digitalWrite(c6,LOW);
    delay(400);
    digitalWrite(c6,HIGH);
    digitalWrite(c7,LOW);
    delay(400);
    digitalWrite(c7,HIGH);
    digitalWrite(c11,LOW);
    delay(400);
    digitalWrite(c11,HIGH);
    digitalWrite(c12,LOW);
    delay(400);
    digitalWrite(c12,HIGH);
  
  for(int i=0;i<4;i++)
  {
    digitalWrite(arr2[i],0);
  }
}
void randompattern3()
{
  digitalWrite(a1,255);
  for (int i=0;i<16;i++)
  {
    digitalWrite(arr3[i],LOW);
    delay(100);
  }
   for (int i=0;i<16;i++)
  {
    digitalWrite(arr3[i],HIGH);
    delay(100);
  }
  digitalWrite(a1,255);
  
}

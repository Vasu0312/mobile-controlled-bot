int x,y,z,t;
int a=3;
int b=4;
int c=5;
int d=6;
int e=7;
int f=8;
int g=9;
int h=10;
void setup() {
// put your setup code here, to run once:
pinMode(a,INPUT);
pinMode(b,INPUT);
pinMode(c,INPUT);
pinMode(d,INPUT);
pinMode(e, OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(h,OUTPUT);
Serial.begin (9600);
}

void loop() {

// put your main code here, to run repeatedly:
x=digitalRead(a);
y=digitalRead(b);
z=digitalRead(c);
t=digitalRead(d);
Serial.print(x);
Serial.print(y);
Serial.print(z);
Serial.println(t);
delay(1000);
if (x==1 && y==0 && z==1 && t==1)
{digitalWrite(e,HIGH);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(h,LOW);}
if (x==1 && y==1 && z==1 && t==0)
{digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(h,HIGH);}
if (x==1 && y==1 && z==0 && t==1)
{digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(h,LOW);}
if (x==1 && y==0 && z==0 && t==1)
{digitalWrite(e,HIGH);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);}
if (x==0 && y==0 && z==1 && t==1)
{digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(h,LOW);}
}

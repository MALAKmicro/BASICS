int led = 7;//pin 7
int button1 = 8;//pin 8
int button2 = 9;// pin 9


void setup() {
 
pinMode(led,OUTPUT);
pinMode(button1,INPUT);
 pinMode(button2,INPUT);
  
}

void loop() {

if(digitalRead(button1)==HIGH)//press button1
{
digitalWrite(led,HIGH);}//led on(1)

if(digitalRead(button2)==HIGH)//press button2
{
digitalWrite(led,LOW);}//led off(0)

  
}


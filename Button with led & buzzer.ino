
int led1 = 6;//pin 6
int buzzer = 7;//pin 7
int button1= 8;//pin 8
int button2 = 9;//pin 9

void setup() {

pinMode(led1,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(button1,INPUT);
pinMode(button2,INPUT);

}

void loop() {

if(digitalRead(button1)==HIGH)//press button1
{
digitalWrite(led1,HIGH);}//led1 on(1)

if(digitalRead(button1)==LOW)//no press button1
{
digitalWrite(led1,LOW);}//led1 off(0)

if(digitalRead(button2)==HIGH)//press button2
{
digitalWrite(buzzer,HIGH);}buzzer on(1)

if(digitalRead(button2)==LOW)//no press button2
{
digitalWrite(buzzer,LOW);}//buzzer off(0)
 
}

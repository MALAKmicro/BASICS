
int led1 = 7;//pin 7
int led2 = 8;//pin 8
int led3 = 9;//pin 9

void setup() {
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  
}

void loop() {
  
digitalWrite(led1,HIGH);//led1 on
digitalWrite(led2,HIGH);//led2 on
digitalWrite(led3,HIGH);//led3 on

delay(2000);

digitalWrite(led1,LOW);//led1 off
digitalWrite(led2,LOW);//led2 off
digitalWrite(led3,LOW);//led3 off

  delay(2000);
}

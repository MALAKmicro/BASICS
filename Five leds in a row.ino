
int led1 = 7;//pin 7
int led2 = 8;//pin 8
int led3 = 9;//pin 9
int led4 = 10;//pin 10
int led5 = 11;//pin 11

void setup() {
  
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);

}

void loop() {

digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,HIGH);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,HIGH);
digitalWrite(led5,LOW);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);

delay(1000);

digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);

delay(1000);

 digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
digitalWrite(led5,LOW);

delay(1000);
}


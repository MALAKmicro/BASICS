int buzzer = 7;//pin 7

int led1 = 8;//pin 8

int led2 = 9;//pin 9

void setup() {

 pinMode(buzzer,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  
}

void loop() {

digitalWrite(buzzer,HIGH);//buzzer on(1)
digitalWrite(led1,HIGH);//led1 on(1)
digitalWrite(led2,LOW);//led2 off(0)

delay(2000);// 2 seconds

digitalWrite(buzzer,LOW);//buzzer off(0)
digitalWrite(led1,LOW);//led1 off(0)
digitalWrite(led2,HIGH);//led2 on(1)

delay(2000);//2 seconds

}


int ledblue1=12;
int green=11;
int yellow=10;
int red=9;
int ledblue2=8;
int buzzer=7;
int switch1=13;
int switch2=6;
pressed=0;
void setup() {
  pinMode(ledblue1,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(ledblue2,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(switch1,INPUT_PULLUP);
  pinMode(switch2,INPUT_PULLUP);
  randomseed(analogRead(A0));
}

void loop() {
  digitalWrite(green,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(900);
  digitalWrite(green,HIGH);
  
  digitalWrite(yellow,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(900);
  digitalWrite(yellow,HIGH);
  
  digitalWrite(red,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(random(900,4901));
  digitalWrite(red,HIGH);

  while(pressed==0){
    digitalWrite(ledblue1,HIGH);
    digitalWrite(ledblue2,HIGH); 
    if(digitalRead(switch1 == 0)){
      pressed=1;
      digitalWrite(ledblue2,LOW);
    }
    else if(digitalRead(switch2 == 0)){
      pressed=1;
      digitalWrite(ledblue1,LOW);
    }
    
  }
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1500);
  digitalWrite(ledblue1,HIGH);
  digitalWrite(ledblue2,HIGH);
  pressed=0;
}

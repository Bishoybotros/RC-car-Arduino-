#include <LiquidCrystal.h>
char cmd;//The Bluetooth Command
const int leftled =1;
const int rightled =6;
//The L298N (Motor Driver) Control Pins
const int rightMotorForward = 2;
const int rightMotorBackward = 3;

const int leftMotorForward = 4;
const int leftMotorBackward = 5;
const int m1 = A0; // right motor
const int m2 =A1; // left motor
 
int trigger =A3; //
int echo = A2;
int rs = 0;
int en = 0;
int d4 = 0;
int d5 = 0;
int d6 = 0;
int d7 = 0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(trigger,OUTPUT);
   pinMode(echo,INPUT);
  pinMode(leftMotorForward,OUTPUT);   //left motor forward
  pinMode(leftMotorBackward,OUTPUT);   //left motor reverse
  pinMode(rightMotorForward,OUTPUT);   //right motor forward
  pinMode(rightMotorBackward,OUTPUT);   //right motor reverse
  Serial.begin(9600);
lcd.begin(16,2);

}
 
void loop() {

  lcd.setCursor(0, 0);
  lcd.print("Bondok");


  
  if(Serial.available())
  {
    cmd = Serial.read();
  }
   
  if(cmd == 'F')
  {           //move forward
  analogWrite(m1,255);
  analogWrite(m2,255);  
  digitalWrite(leftMotorForward,HIGH);
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(leftled,LOW);    
  digitalWrite(rightled,LOW); 
   analogWrite (trigger,LOW);
  delayMicroseconds (10);
  analogWrite (trigger,HIGH);
  delayMicroseconds (10);  
  analogWrite (trigger,LOW);
  delayMicroseconds (10);  
  float time = pulseIn (echo,HIGH);
  float D = 343*0.00001*time;//distance in dcmeter
  int d = D/2; 
   delay(100);  
  
  lcd.setCursor(0, 1);
  lcd.print(d);
    
  }
   
  else if(cmd == 'B'){      //move reverse
  analogWrite(m1,255);
  analogWrite(m2,255);  
    digitalWrite(leftMotorBackward,HIGH);
    digitalWrite(rightMotorBackward,HIGH);
    digitalWrite(leftled,LOW);    
    digitalWrite(rightled,LOW); 
     analogWrite (trigger,LOW);
  delayMicroseconds (10);
  analogWrite (trigger,HIGH);
  delayMicroseconds (10);  
  analogWrite (trigger,LOW);
  delayMicroseconds (10);  
  float time = pulseIn (echo,HIGH);
  float D = 343*0.00001*time;//distance in dcmeter
  int d = D/2; 
   delay(100);  
  
  lcd.setCursor(0, 1);
  lcd.print(d);   
  }
   
  else if(cmd == 'L'){      //turn Left
 analogWrite(m1,255);
  analogWrite(m2,55);  
    digitalWrite(rightMotorForward,HIGH);
    digitalWrite(leftled,HIGH);    
    digitalWrite(rightled,LOW);
     analogWrite (trigger,LOW);
  delayMicroseconds (10);
  analogWrite (trigger,HIGH);
  delayMicroseconds (10);  
  analogWrite (trigger,LOW);
  delayMicroseconds (10);  
  float time = pulseIn (echo,HIGH);
  float D = 343*0.00001*time;//distance in dcmeter
  int d = D/2; 
   delay(100);  
  
  lcd.setCursor(0, 1);
  lcd.print(d);
  }
   
  else if(cmd == 'R'){
     analogWrite(m1,55);
  analogWrite(m2,255);        //turn Right
    digitalWrite(leftMotorForward,HIGH);
    digitalWrite(leftled,LOW);    
    digitalWrite(rightled,HIGH);
     analogWrite (trigger,LOW);
  delayMicroseconds (10);
  analogWrite (trigger,HIGH);
  delayMicroseconds (10);  
  analogWrite (trigger,LOW);
  delayMicroseconds (10);  
  float time = pulseIn (echo,HIGH);
  float D = 343*0.00001*time;//distance in dcmeter
  int d = D/2; 
   delay(100);  
  
  lcd.setCursor(0, 1);
  lcd.print(d);
  }
  else{  
        //STOP (all motors stop)
         analogWrite (trigger,LOW);
  delayMicroseconds (10);
  analogWrite (trigger,HIGH);
  delayMicroseconds (10);  
  analogWrite (trigger,LOW);
  delayMicroseconds (10);  
  float time = pulseIn (echo,HIGH);
  float D = 343*0.00001*time;//distance in dcmeter
  int d = D/2; 
   delay(100);  
  
  lcd.setCursor(0, 1);
  lcd.print(d);
    digitalWrite(leftMotorForward,LOW);
    digitalWrite(leftMotorBackward,LOW);
    digitalWrite(rightMotorForward,LOW);
    digitalWrite(rightMotorBackward,LOW);
    digitalWrite(leftled,LOW);    
    digitalWrite(rightled,LOW); 
  }
  delay(50);
  
   
  
  

  
 
   }





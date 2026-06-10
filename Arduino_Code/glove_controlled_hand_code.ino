#include <Servo.h>

int s1=5;
int s2=6;
int s3=7;
int s4=8;
int s5=9;
int f1=A0;
int f2=A1;
int f3=A2;
int f4=A3;
int f5=A4;
int invert_angle1;
int invert_angle2;
int invert_angle3;
int invert_angle4;
int invert_angle5;
int servo_pos1;
int servo_pos2;
int servo_pos3;
int servo_pos4;
int servo_pos5;
int flex_pos1;
int flex_pos2;
int flex_pos3;
int flex_pos4;
int flex_pos5;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

void setup() {
  // put your setup code here, to run once:
pinMode(s1,OUTPUT);
pinMode(s2,OUTPUT);
pinMode(s3,OUTPUT);
pinMode(s4,OUTPUT);
pinMode(s5,OUTPUT);
pinMode(f1,INPUT);
pinMode(f2,INPUT);
pinMode(f3,INPUT);
pinMode(f4,INPUT);
pinMode(f5,INPUT);
servo1.attach(s1);
servo2.attach(s2);
servo3.attach(s3);
servo4.attach(s4);
servo5.attach(s5);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
flex_pos1=analogRead(f1);
flex_pos2=analogRead(f2);
flex_pos3=analogRead(f3);
flex_pos4=analogRead(f4);
flex_pos5=analogRead(f5);

servo_pos1=map(flex_pos1,820,945,0,180);
servo_pos1=constrain(servo_pos1,0,180);
invert_angle1=180-servo_pos1;
servo1.write(invert_angle1);

servo_pos2=map(flex_pos2,803,908,0,180);
servo_pos2=constrain(servo_pos2,0,180);
invert_angle2=180-servo_pos2;
servo2.write(invert_angle2);

servo_pos3=map(flex_pos3,866,955,0,180);
servo_pos3=constrain(servo_pos3,0,180);
invert_angle3=180-servo_pos3;
servo3.write(invert_angle3);

servo_pos4=map(flex_pos4,845,955,0,180);
servo_pos4=constrain(servo_pos4,0,180);
invert_angle4=180-servo_pos4;
servo4.write(invert_angle4);

servo_pos5=map(flex_pos5,802,953,0,180);
servo_pos5=constrain(servo_pos5,0,180);
invert_angle5=180-servo_pos5;
servo5.write(invert_angle5);

delay(250);

Serial.print(flex_pos1);
Serial.print("     ");
Serial.print(flex_pos2);
Serial.print("     ");
Serial.print(flex_pos3);
Serial.print("     ");
Serial.print(flex_pos4);
Serial.print("     ");
Serial.println(flex_pos5);
}

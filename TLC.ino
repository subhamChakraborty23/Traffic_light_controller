#include "TrafficLight.h"
//defining the pin configurations
//M1:
int M1_G = 10;
int M1_Y = 9;
int M1_R = 8;
//MT:
int MT_G = 7;
int MT_Y = 6;
int MT_R = 5;
//M2:
int M2_G = 4;
int M2_Y = 3;
int M2_R = 2;
//S
int S_G = 13;
int S_Y = 12;
int S_R = 11;

//objects
TrafficLight M1(M1_G,M1_Y,M1_R);//main line 1
TrafficLight MT(MT_G,MT_Y,MT_R);//main turn signal
TrafficLight M2(M2_G,M2_Y,M2_R);//main line 2
TrafficLight S(S_G,S_Y,S_R);//side road signal


int sec7=7000,sec5=5000,sec2=2000,sec3=3000;

void setup() {}

void loop() {
//s1:
  M1.green();
  M2.green();
  MT.red();
  S.red();
  delay(sec7);
 //s2:
  M1.green();
  M2.yellow();
  MT.red();
  S.red();
  delay(sec2);
  //s3:
  M1.green();
  M2.red();
  MT.green();
  S.red();
  delay(sec5);
  //s4:
  M1.yellow();
  M2.red();
  MT.yellow();
  S.red();
  delay(sec2);
  //s5:
  M1.red();
  M2.red();
  MT.red();
  S.green();
  delay(sec3);
  //s6:
  M1.red();
  M2.red();
  MT.red();
  S.yellow();
  delay(sec2);
  
  
  
}

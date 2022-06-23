// This Firmware based on NicoHood/HID and mon/Arduino-USB-Rename Project
#include <HID-Project.h>
#include "usb_rename.h"

USBRename dummy = USBRename("Jubeat I/O Board", "happyvalley", "abcd");

// When connect i/o board to jubeat arcade button board
// connect each side to corresponding side i/o board connector
// using ph2.0 double head reverse connector

// Key binding:
// 1,2,3,4
// q,w,e,r
// a,s,d,f
// z,x,c,v

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(16, INPUT);
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(16,HIGH);
  digitalWrite(14,HIGH);
  digitalWrite(15,HIGH);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  NKROKeyboard.begin();
}

void loop() {
  if (digitalRead(2) == LOW) {
 NKROKeyboard.add('1');
 delay(10);}
  else
{
  NKROKeyboard.release('1');
}
  if (digitalRead(3) == LOW) {
 NKROKeyboard.add('2');
 delay(10);
  }
  else
{
  NKROKeyboard.release('2');
}
  if (digitalRead(4) == LOW) {
 NKROKeyboard.add('w');
 delay(10);
  }
  else
{
  NKROKeyboard.release('w');
}
  if (digitalRead(5) == LOW) {
 NKROKeyboard.add('q');
 delay(10);}
  else
{
  NKROKeyboard.release('q');
}
  if (digitalRead(6) == LOW) {
 NKROKeyboard.add('a');
 delay(10);
  }
  else
{
  NKROKeyboard.release('a');
}
  if (digitalRead(7) == LOW) {
 NKROKeyboard.add('s');
 delay(10);
  }
  else
{
  NKROKeyboard.release('s');
}
  if (digitalRead(8) == LOW) {
 NKROKeyboard.add('x'); 
 delay(10);
  }
  else
{
  NKROKeyboard.release('x');
}
  if (digitalRead(9) == LOW) {
 NKROKeyboard.add('z');
 delay(10);
  }
  else
{
  NKROKeyboard.release('z');
}
  if (digitalRead(A3) == LOW) {
 NKROKeyboard.add('4');
 delay(10);
  }
  else
{
  NKROKeyboard.release('4');
}
  if (digitalRead(A2) == LOW) {
 NKROKeyboard.add('3');
 delay(10);
  }
  else
{
  NKROKeyboard.release('3');
}
  if (digitalRead(A1) == LOW) {
 NKROKeyboard.add('e');
 delay(10);
  }
  else
{
  NKROKeyboard.release('e');
}
  if (digitalRead(A0) == LOW) {
 NKROKeyboard.add('r');
 delay(10);
  }
  else
{
  NKROKeyboard.release('r');
}
  if (digitalRead(15) == LOW) {
 NKROKeyboard.add('f');
 delay(10);
  }
  else
{
  NKROKeyboard.release('f');
}
  if (digitalRead(14) == LOW) {
 NKROKeyboard.add('d');
 delay(10);
  }
  else
{
  NKROKeyboard.release('d');
}
  if (digitalRead(16) == LOW) {
 NKROKeyboard.add('c');
 delay(10);
  }
  else
{
  NKROKeyboard.release('c');
}
  if (digitalRead(10) == LOW) {
 NKROKeyboard.add('v');
 delay(10);
  }
  else
{
  NKROKeyboard.release('v');
}
  }

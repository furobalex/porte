#include <Arduino.h>
#include "porte.h"

Porte::Porte(int pin_right, int pin_left) {
  _left = pin_left;
  _right = pin_right;
}

void Porte::open(){
  analogWrite(_left, 1);
  analogWrite(_right, 1);
  _time_last_action = millis();
  _open = true;
}

void Porte::close(){
  analogWrite(_left, 200);
  analogWrite(_right, 200);
  _time_last_action = millis();
  _open = false;
}



bool Porte::isFinished(){
  if((millis() - _time_last_action) >= TIME_ACTION) return true; 
  else return false;
}

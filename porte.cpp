#include <Arduino.h>
#include "porte.h"

Porte::Porte(int pin_right, int pin_left, byte val_open, byte val_close) {
  _left = pin_left;
  _right = pin_right;
  _val_close = val_close;
  _val_open = val_open;
}

void Porte::open(){
  analogWrite(_left, _val_open);
  analogWrite(_right, _val_open);
  _time_last_action = millis();
  _open = true;
}

void Porte::close(){
  analogWrite(_left, _val_close);
  analogWrite(_right, _val_close);
  _time_last_action = millis();
  _open = false;
}



bool Porte::isFinished(){
  if((millis() - _time_last_action) >= TIME_ACTION) return true; 
  else return false;
}

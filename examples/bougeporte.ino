#include "porte.h"

Porte porte (9, 10);

void setup() {
  Serial.begin(115200);
}

void loop() {
  
  porte.open();
  Serial.println("open");
  while(!(porte.isFinished()));
  
  porte.close();
  Serial.println("close");
  while(!(porte.isFinished()));
}

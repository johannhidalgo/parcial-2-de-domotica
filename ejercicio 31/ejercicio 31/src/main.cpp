#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println();
  int vector [] = {1,2,3,4,5};
  int suma =0;

  for(int i =0; i<5; i++)
  {
    suma = suma + vector[i];
  }
  Serial.println("el resultado de la suma de todos los elementos del vector es:" + String(suma));
}

void loop() {
  
}


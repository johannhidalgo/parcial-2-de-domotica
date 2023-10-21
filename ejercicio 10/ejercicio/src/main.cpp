#include <Arduino.h>
#include <math.h>

float resultado=0;
void setup() {
  Serial.begin(115200);
  Serial.println();

  Serial.println("digite elvalor de x:");
  while (!Serial.available()) {}
  int x = Serial.parseInt();
  Serial.println("valor de x:" + String(x));
  
  Serial.println("digite elvalor de y:");
  while (!Serial.available()) {}
  int y= Serial.parseInt();
  Serial.println("digite el valor de y:" + String(y));

  Serial.println("el resultado es:" + String(resultado = (sqrt(x))/(pow(y,2)-1)));
}

void loop() {

}


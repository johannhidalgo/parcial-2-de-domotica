#include <Arduino.h>
#include <DataCapture.h>

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

void setup() {
  Serial.begin(115200);
  Serial.println();
  pedirDatos();
  int resultado = calcularSuma(vec, tam);
  Serial.print("El resultado de la suma de todos los elementos del vector es: ");
  Serial.println(resultado);
}

void pedirDatos() {
  tam = DataCapture::captureInteger("Número de elementos del vector: ");
  for (int i = 0; i < tam; i++) {
    vec[i] = DataCapture::captureInteger(String(i + 1) + " digite un número: ");
  }
}

int calcularSuma(int vec[], int tam) {
  int suma = 0;

  for (int i = 0; i < tam; i++) {
    suma += vec[i];
  }
  return suma;
}

void loop() {
  
}

#include <Arduino.h>
#include <DataCapture.h>

struct Alumno {
  char nombre [30];
  int edad;
  float promedio;

} alumno[3], *puntero_alumno = alumno;
void pedirDatos();
void cacularMejorPromedio(Alumno *);

void setup(){
  Serial.begin(115200);
  Serial.println();
  pedirDatos();
  calcularMejorPromedio(puntero_alumno);

}

void pedirDatos(){
  for(int i = 0; i<3; i++){
    DataCapture::captureString("Ingrese su nombre:", (puntero_alumno + i)->nombre, 30);
    (puntero_alumno +i)->edad = DataCapture::captureInteger("ingrese su edad: ");
    (puntero_alumno +i )->promedio = DataCapture::captureFloat("ingrese su promedio:");
    Serial.println("");
  }
}

void calcularMejorPromedio(Alumno *puntero_alumno){
  float mayor = 0.0 ;
  int pos =0;

  for(int i =0; i<3; i++){
    if((puntero_alumno +i)->promedio > mayor){
      mayor = (puntero_alumno +i) ->promedio;
      pos =i;
    }
  }
   Serial.println("el alumno con el mayor promedio es:");
   Serial.println("nombre:" + String((puntero_alumno + pos)-> nombre));
   Serial.println("edad:" + String((puntero_alumno + pos)-> edad));
   Serial.println("promedio:" + String((puntero_alumno + pos)-> promedio));
}


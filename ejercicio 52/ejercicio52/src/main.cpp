#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println();
  int numeros [] = {3,2,1,5,4};
  int i,j,aux,min;

  for(i=0; i<5; i++)
  {
    min =i;
    for(j =i+1; j<5; j++)
    {
      if(numeros[j] < numeros[min])
      {
        min=j;
      }
    }
      aux = numeros[i];
      numeros[i] = numeros[min];
      numeros[min] = aux;
  }
   Serial.println("orden ascendente:");
   for(i=0; i<5; i++)
   {
   Serial.println( numeros[i] );
}
    
 
}

void loop() {
  
}



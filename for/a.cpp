// programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10 primeros enteros mayores que cero
#include <stdio.h>
int main () {
    int i, suma = 0, cuadrado;
    for(i = 1; i <= 10; i++) {
        cuadrado = i * i;
        suma += cuadrado;
    }
      printf ("%d \n", suma);
      return 0;
}

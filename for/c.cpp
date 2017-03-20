#include <stdio.h>
int main () {
    int suma = 0, numero, i;
    printf ("ingrese la cantidad de numeros \n");
    scanf ("%d", &numero);
    for (i = 1; i <= numero; i++) {
        suma += i;
    }
    printf("la suma de los numeros es: %d \n",suma);
    return 0;
}

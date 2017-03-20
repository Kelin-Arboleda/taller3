#include <stdio.h>
#include <math.h>
int main () {
    int suma = 0, potencia = 0, i, numero;
    printf("ingrese el valor a sumar \n");
    scanf("%d", &numero);
    for(i = 1; i <= numero; i++) {
        potencia = pow(2 , i);
        suma += potencia;
    }
    printf("la suma total: %d \n",suma);
return 0;
}


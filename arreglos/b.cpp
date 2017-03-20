#include <stdio.h>
int main () {
    int numeros[7] = {1,2,3,4,5,6,7}, multiplicacion = 1, i;
    for(i = 0; i < 7; i++){
        multiplicacion = multiplicacion * numeros[i];
    }
    printf("la multiplicacion de los elementos del vector es: %d \n",multiplicacion);
return 0;
}


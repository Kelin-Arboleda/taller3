#include <stdio.h>
int main () {
    int numeros[7] = {1,2,3,4,5,6,7}, suma = 0, i;
    for(i = 0; i < 7; i++){
        suma = suma + numeros[i];
    }
    printf("la suma de los elementos del vector es: %d \n",suma);
return 0;
}

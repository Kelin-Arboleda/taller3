#include <stdio.h>
int main(){
    int i = 1, suma = 0;
    while( i < 50 ){
        i = i + 2;
        suma = suma + i;
    }
    printf("la suma de los numeros impares de 1 hasta 50 es: %d \n",suma);
   return 0;
}

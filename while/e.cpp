#include <stdio.h>
int main (){
    int numero,i = 1,factorial = 1;
    printf("Este programa calculara el factorial del numero entero que ingrese. \n");
    printf("Ingrese un numero \n");
    scanf("%d", &numero);
    while ( i < numero ){
        i++;
        factorial = i * factorial;
    }
    printf("El factorial del numero ingresado es: %d \n ",factorial);
    return 0;
}

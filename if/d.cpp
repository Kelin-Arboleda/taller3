#include <stdio.h>
int main (){
    int numero;
    printf ("ingrese un numero \n");
    scanf ("%d",&numero);
    if (numero < 0){
        printf ("el numero ingresado es negativo \n");
            }else if (numero > 0){
                printf ("el numero ingresado es positivo \n");
            }
    return 0;
}

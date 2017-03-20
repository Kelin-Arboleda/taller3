#include <stdio.h>
int main (){
    int numero1, numero2, numero3, numero4;
    printf ("ingrese 3 numeros \n");
    scanf ("%d %d %d",&numero1, &numero2, &numero3);
    printf ("ingrese otro numero \n");
    scanf ("%d", &numero4);
    if (numero4 == numero1 || numero4 == numero2 || numero4 == numero3 ){
            printf ("el numero coincide con alguno de los anteriormente ingresados \n");
                } else printf ("el numero no coincide con ningun otro numero \n");
        return 0;
}

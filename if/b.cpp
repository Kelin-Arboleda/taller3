#include <stdio.h>
int main (){
    int numero1, numero2, numero3;
    printf ("ingrese 3 numeros \n");
    scanf ("%d %d %d", &numero1, &numero2, &numero3);
    if (numero1 > numero2 & numero1 > numero3) {
        printf ("el numero mayor es: %d \n", numero1);
        } else if (numero2 > numero1 & numero2 > numero3){
            printf ("el numero mayor es: %d \n", numero2);
            } else if (numero3 > numero1 & numero3 > numero2){
                printf ("el numero mayor es: %d \n", numero3);
            } else { printf ("los numero son iguales ");
        }
return 0;
}

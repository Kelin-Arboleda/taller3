#include <stdio.h>
int main (){
    int numero1, numero2;
    printf ("ingrese 2 numeros \n");
    scanf ("%d %d", &numero1, &numero2);
    if (numero1 > numero2) {
        printf ("el numero mayor es: %d \n",numero1);
        } else if (numero2 > numero1){
            printf ("el numero mayor es: %d \n",numero2);
            } else if (numero1 == numero2){
            printf ("los numero son iguales ");
        }
return 0;
}

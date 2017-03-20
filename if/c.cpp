#include <stdio.h>
int main (){
    int numero;
    printf ("ingrese un numero entero \n");
    scanf ("%d",&numero);
    if (numero %2 == 0){
        printf ("el numero %d es par \n",numero);
      }   else  printf ("el numero %d es impar \n",numero);

    return 0;
}

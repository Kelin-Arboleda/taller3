#include <stdio.h>
int main () {
    int numero, suma = 0;
    do {
        printf ("ingrese un numero \n");
        scanf ("%d", &numero);
        if (numero > 0 ) {
            suma = suma + numero;
        }
    } while ((numero < 20 || numero > 30 ) && (numero != 0));
    printf ("la suma es: %d \n", suma);
    return 0;
}

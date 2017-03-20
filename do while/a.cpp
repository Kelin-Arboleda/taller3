#include <stdio.h>
int main() {
    int numero, cantidad = 0;
    do {
    printf ("ingrese un numero \n");
    scanf ("%d", &numero);
    if (numero > 0) {
            cantidad++;
                }
    } while ( numero != 0 );

        printf ("esta es la cantidad de numeros mayores que 0 ingresados: %d \n",cantidad);

    return 0;
}

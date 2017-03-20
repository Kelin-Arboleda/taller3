#include <stdio.h>
int main () {
    int numero, i;
    do {
        printf ("ingrese un numero entero \n");
        scanf ("%d", &numero);
    } while ( numero < 1 || numero > 10);
    for (i = 1; i <= 10; i++) {
        printf ("%d x %d = %d \n", numero, i, numero*i);
    }
    return 0;
}

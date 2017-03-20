#include <stdio.h>
int main () {
    int matriz[3][3], f, c, filas, columnas;
    for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
            printf ("ingrese el valor en la posicion [%d][%d]: ",f,c);
            scanf ("%d", & matriz[f][c]);
        }
    }
    printf("matriz original \n");
    for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
            printf ("%d",matriz[f][c]);
        }
        printf("\n");
    }
    printf("matriz transpuesta \n");
    for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
            printf ("%d",matriz[c][f]);
        }
        printf("\n");
    }

    return 0;
    }

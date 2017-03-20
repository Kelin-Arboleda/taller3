#include <stdio.h>
int main () {
    int columnas, filas, f, c;
    printf ("ingrese la cantidad de columnas \n");
    scanf ("%d", &columnas);
    printf ("ingrese la cantidad de filas \n");
    scanf ("%d", &filas);
    int arreglo [filas][columnas];
    // llenar matriz
    for(f = 0; f < filas; f++) {
        for(c = 0; c < columnas; c++) {
            printf ("ingrese el valor en la posicion [%d][%d] \n",f,c);
            scanf ("%d", &arreglo [f][c]);
        }
    }
    // imprimir matriz
    for(f = 0; f < filas; f++) {
       for(c = 0; c < columnas; c++){
            printf ("posicion [%d][%d] = %d ", f,c, arreglo[f][c]);
       }
       printf ("\n");
    }
    return 0;
}

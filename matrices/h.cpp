#include <stdio.h>
int main () {
    int matriz1 [2][4];
    int matriz2 [4][2];
    int f, c, producto_matriz[4][4];
    //leno matrices
    printf("       PRIMERA MATRIZ \n");
    for(f = 0; f < 2; f++) {
        for(c = 0; c < 4; c++) {
            printf ("ingrese el valor en la posicion [%d][%d] ",f,c);scanf ("%d", & matriz1[f][c]);
        }
    }
     printf("     SEGUNDA MATRIZ \n");
      for(f = 0; f < 4; f++) {
        for(c = 0; c < 2; c++) {
             printf ("ingrese el valor en la posicion [%d][%d] ",f,c);scanf ("%d", & matriz2[f][c]);
        }
    }
    //muestro matrices
    printf(" \n\tPRIMERA MATRIZ \n");
      for(f = 0; f < 2; f++) {
        for(c = 0; c < 4; c++) {
             printf ("%d",matriz1[f][c]);
        }
        printf("\n");
    }
    printf("\n\tSEGUNDA MATRIZ \n");
      for(f = 0; f < 4; f++) {
        for(c = 0; c < 2; c++) {
             printf ("%d",matriz2[f][c]);
        }
         printf("\n");
    }
    //multiplico las 2 matrices
      printf("\n\tESTA ES LA MULTIPLICACION DE LAS 2 MATRICES \n");
    for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
            producto_matriz[f][c] = matriz1[f][c] * matriz2[f][c];
            printf("%d",producto_matriz[f][c]);
        }
        printf("\n");
     }
    return 0;
}

    return 0;
}


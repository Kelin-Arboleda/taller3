#include <stdio.h>
int main () {
    int matriz[50][50], f, c, filas, columnas;
    char band = 'F';
    printf("ingrese el numero de filas: "); scanf("%d", &filas);
    printf("ingrese el numero de columnas: "); scanf("%d", &columnas);
    for(f = 0; f < filas; f++) {
        for(c = 0; c < columnas; c++) {
            printf("ingrese el valor en la posicion [%d][%d] ",f,c);scanf ("%d", & matriz[f][c]);
        }
    }
    if(filas == columnas){
        for(f = 0; f < filas; f++){
            for(c = 0; c < columnas; c++){
                if(matriz[f][c] == matriz[c][f]){
                    band = 'V';
                }
            }

        }
    }
    if(band == 'V'){
        printf("\n matriz simetrica \n");
    } else {
    printf("\n matriz no simetrica \n");
    }
return 0;
}

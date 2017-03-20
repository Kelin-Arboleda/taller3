#include<stdio.h>
#include<stdlib.h>
int main(){
     int matriz[100][100], filas, columnas, numero_aleatorio, f, c;
     printf("Digite el numero de filas: "); scanf("%d", &filas);
     printf("Digite el numero de columnas: "); scanf("%d", &columnas);
     for(f = 0; f < filas; f++){
      for(c = 0; c < columnas; c++){
       numero_aleatorio = rand()%(9);
       matriz[f][c] = numero_aleatorio;
       printf("%d ",matriz[f][c]);
      }
      printf("\n");
     }
     return 0;
}

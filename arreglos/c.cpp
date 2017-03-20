#include <stdio.h>
int main () {
    int numero[100], n, i;
    printf("ingrese la cantidid de elementos del vector \n");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("ingrese un numero: ");
        scanf("%d", &numero[i]);
    }
    for(i = 0; i < n; i++){
          printf("%d  =  %d \n",i,numero[i]);
    }
  return 0;
}

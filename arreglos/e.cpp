#include <stdio.h>
int main () {
    int numero[20], i, n, mayor;
    printf("ingrese la cantidad de elementos del vector: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("%d . Digite un numero: ",i + 1);
        scanf("%d", numero[i]);
        if(numero[i] > mayor) {
            mayor = numero[i];
        }
    }
    printf("el mayor elemento del vector es: %d \n",mayor);
    return 0;
}

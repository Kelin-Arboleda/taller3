#include <stdio.h>

int main(){

    int i, n, cont = 0;
    int a[100];
    a[0] = 0;
    a[1] = 1;

    printf("Numero de la serie \n");
    scanf("%d", &n);

    printf("\n");

    for(i=1; i < n; i++){
    a[i+1] = a[i-1] + a[i];

    }
    for(i=0; i < n; i++){
        if (cont == 10){
        printf("\n"),
        cont = 0;

        }
        cont += 1;
    }

    printf("\n");

    return 0;

}

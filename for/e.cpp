#include <stdio.h>
int main (){
     int n,i,suma = 0;
     printf("Ingrese un termino \n");
     scanf("%d", &n);
     for(i = 1; i <= n; i++){
      if(i%2==0)
       suma = suma - i;
      else
       suma = suma + i;
     }
     printf("El total es: %d \n", suma);
return 0;

}

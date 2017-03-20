#include<stdio.h>
int main(){
     int numero[6]{2,5,4,24,6,7}, suma = 0, i;
     for(i=0 ;i < 6; i++){
      suma += numero[i];
      }
     for(i = 0; i < 6; i++){
      if((suma - numero[i]) == numero[i]){
       printf("El numero %d es igual a la suma del resto \n",numero[i]);
       }
     }
   return 0;
}

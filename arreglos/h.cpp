#include<stdio.h>
int main(){
     int numeros1[]{10,20,30,40,50}, numeros2[5], i;
     for(i = 0; i < 5; i++){
      numeros2[i] = numeros1[i] * 2;
      printf("%d\n",numeros2[i]);
     }
 return 0;
}

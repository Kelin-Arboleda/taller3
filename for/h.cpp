#include <stdio.h>
int main (){
 int numero, n = 2;
 printf("ingrese un numero \n");
 scanf("%d", &numero);
 while(n<=numero){
  if(numero%n==0){
   numero=numero/n;
   printf("%d * ",n);
  }
 else{
  n++;
 }

 }
 return 0;
}

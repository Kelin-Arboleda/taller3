#include <stdio.h>
int main (){
   char letra;
   printf("ingrese una letra \n");
   scanf("%c", &letra);
    switch(letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': printf("Si es una vocal minuscula \n");
        break;
    default : printf("No es una vocal minuscula \n");
        break;
    }
return 0;
}

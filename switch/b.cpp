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
    case 'u': printf("Es una vocal minuscula \n");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': printf("Es una vocal mayuscula \n");
        break;
    default : printf("No es una vocal \n");
        break;
    }
return 0;
}


#include <stdio.h>
int main(){
    int i = 0, suma = 0;
    while(i < 100){
        i++;
        suma = suma + i;
    }
    printf("%d \n",suma);
   return 0;
}

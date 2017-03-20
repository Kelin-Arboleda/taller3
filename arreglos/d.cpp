#include <stdio.h>
int main () {
    int numero[10] = {1,2,3,4,5,6,7,8,9,10}, i;
    for(i = 9; i >= 0; i--) {
        printf("%d \n",numero[i]);
    }
    return 0;
}

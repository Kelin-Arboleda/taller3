#include <stdio.h>
int main () {
    int matriz1 [2][2] = {{1,7}, {9,7}};
    int matriz2 [2][2];
    int f, c;
    for(f = 0; f < 2; f++){
        for(c = 0; c < 2; c++){
            matriz2 [f][c] = matriz1 [f][c];
        }
    }
    for(f = 0; f < 2; f++){
        for(c = 0; c < 2; c++){
           printf("%d",matriz2[f][c]);
        }
        printf(" \n ");
    }
    return 0;

}

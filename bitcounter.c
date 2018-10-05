#include <stdio.h>

int bitcounter(int x){

    int b = 0;

    while (x != 0){
        x &= (x-1);
        b++;
    }
    return b;

}

void main(){

    int test[4] = {4,7,45,2345};

    for (int i = 0; i < 4; i++)
        printf("%d\n", bitcounter(test[i]));

}

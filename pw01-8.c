#include <stdio.h>

void plus(){
    printf("#");
}

int main(){
    for (int i = 0; i < 6; ++i){
        plus();
        if (i == 0 || i == 2 || i == 5) printf("\n");
    }
    return 0;
}
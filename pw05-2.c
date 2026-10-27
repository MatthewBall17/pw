#include <stdio.h>

#define HEIGHT 5

int main(){
    // вариант 18
    for (int i = 0; i < 3; i++){
        for (int h = 0; h < HEIGHT; h++){

            int spaces = HEIGHT + (2-i) - h;
            int signs = 1 + 2*h + 2*i;

            for (int x = 0; x < spaces; x++){
                printf(" ");
            }
            for (int y = 0; y < signs; y++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
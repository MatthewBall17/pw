#include <stdio.h>

void phasa_2(){
    printf("BETA ");
}

void phasa_1(){
    printf("ALPHA ");
    phasa_2();
    printf("GAMMA ");
}
int main(){
    printf("START ");
    phasa_1();
    printf("END");
    return 0;
}
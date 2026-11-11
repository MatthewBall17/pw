#include <stdio.h>

int main(){
    // вариант 26
    int c;
    while((c = getchar()) != EOF){
        if(c <= 127 && (c % 2 != 0)) putchar(c);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int reactor_core = 67;
    int doubled = 2 * reactor_core;
    int square =  reactor_core * reactor_core;
    printf("[%d, ", reactor_core);
    printf("%d, ", doubled);
    printf("%d]", square);
    return 0;
}
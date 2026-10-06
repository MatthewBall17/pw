#include <stdio.h>

int main(){
    int reactor_core = 67;
    int doubled = 2 * reactor_core;
    int square =  reactor_core * reactor_core;
    printf("[%d, %d, %d]\n", reactor_core, doubled, square);
    
    return 0;
}
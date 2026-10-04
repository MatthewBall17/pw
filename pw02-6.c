#include <stdio.h>
#include <stdint.h>

int main(){
    int x; uint8_t y; scanf("%d", &x); y = x;
    y += y; printf("ADD: %d\n", (unsigned int)y); y = x;
    y *= 2; printf("MUL2: %d\n", (unsigned int)y); y = x;
    y *= y; printf("SQR: %d\n", (unsigned int)y);

    return 0;
}
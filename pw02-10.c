#include <stdio.h>
#include <stdint.h>

int main(){
    int a, b; float c; 
    scanf("%x %o %f", &a, &b, &c);
    printf("PACKET_ID: %d\nSTATUS_CODE: %d\nSTATUS_CHAR: %c\n", (int)a, (uint8_t)b, (char)b);
    printf("VOLTAGE: %.2f\nCHECKSUM: %d\n", c, (uint8_t)a + (uint8_t)b);

    return 0;
}
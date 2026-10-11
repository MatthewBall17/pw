#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c; scanf("%c", &c);
    printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\n", c, c, c);
    printf("UPPER: %c\nNEXT: %c\nPREV: %c\n", toupper(c), c+1, c-1);

    return 0;
}
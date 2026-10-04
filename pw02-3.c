#include <stdio.h>

int main(){
    int a, b, c;
    a = 10; b = 010; c = 0x10;
    printf("DEC_10: %d\nOCT_10: %d\nHEX_10: %d\n", a, b, c);

    printf("INT_SUFFIX: %zu %zu %zu %zu\n", sizeof(10), sizeof(10u), sizeof(10ll), sizeof(10ull));
    printf("FLOAT_SUFFIX: %zu %zu %zu\n", sizeof(0.1f), sizeof(0.1), sizeof(0.1l));
    printf("FLOAT_EQ: %d\n", 0.1f == 0.1);

    printf("CHAR_FORMS: %d %d %d\n", 'A', '\x41', '\101');
    printf("CHAR_LIT_VAR_STR: %zu %zu %zu\n", sizeof('A'), sizeof(char), sizeof("A"));

    return 0;
}
#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %x %o", &a, &b, &c);
    printf("UNIT_ID: %d\nUNIT_VERSION: %d\nUNIT_STATUS: %d\n", a, b, c);
    printf("SUM: %d\n", a + b + c);
    
    return 0;
}
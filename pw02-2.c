#include <stdio.h>
#include <stdbool.h>

int main(){
    int a, b; bool x, y;
    scanf("%d %d", &a, &b); x = a; y = b;
    printf("MODULE_READY: %d\nFAULT_STATE: %d\n", x, y);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", (int)x + (int)y);

    return 0;
}
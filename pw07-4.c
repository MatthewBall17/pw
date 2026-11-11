#include <stdio.h>

void assign_a(int *a, int *b, int *c){
    *b = *a; *c = *a;
}
int main(){
    // вариант 30
    int a = 1, b = 2, c = 3;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    assign_a(&a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
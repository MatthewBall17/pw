#include <stdio.h>

int main(){
    long double x; scanf("%Lf", &x);
    printf("FLOAT: %.6f\n", (float)x);
    printf("DOUBLE: %.6f\n", (double)x);
    printf("LDOUBLE: %.6Lf\n", x);
    printf("FLOAT+1: %.6f\n", (float)x+1);
    printf("DOUBLE+1: %.6f\n", (double)x+1);
    printf("LDOUBLE+1: %.6Lf\n", x+1);
}
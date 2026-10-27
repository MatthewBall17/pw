#include <stdio.h>
#include <stdlib.h>

double calc(double a, double b){
    return abs(a-b) / (a+b);
}
int main(){
    // вариант 5
    double a, b;
    printf("Значение a и b: ");
    while (scanf("%lf %lf", &a, &b) == 2){
        printf("Коэффициент отражения: %.4f", calc(a, b));
        printf("\nЗначение a и b: ");
    }

    return 0;
}
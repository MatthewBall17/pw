#include <stdio.h>

double sum_factorials(double a, double b){
    long long x = 1, y = 1;
    for(int i = 1; i <= a; i++) x *= i;
    for(int i = 1; i <= b; i++) y *= i;
    return (double)x + y;
}
int main(){
    // вариант 24
    double a, b;
    while(printf("Введите два числа: "), scanf("%lf %lf", &a, &b) == 2){
        if(a <= 0 || b <= 0){
            printf("Числа должны быть натуральными\n"); continue;
        }
        if((a-(int)a) != 0.0 || (b-(int)b) != 0.0) {
            printf("Числа должны быть натуральными\n"); continue;
        }
        printf("Сумма факториалов: %.4f\n", sum_factorials(a, b));
    }
    printf("Некорректный ввод данных!\n");
    return 0;
}
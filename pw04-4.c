#include <stdio.h>

int main(){
    // (111260335 + 19) % 30 + 1 = 15
    int n, i; float x, sum;
    printf("N: ");
    if (scanf("%u", &n) != 1 || n <= 0) return 0;
    i = 0;
    while (i != n){
        if(scanf("%f", &x) != 1){
            getchar(); continue;
        }
        i++; if (x > 0) sum += x;
    }
    printf("Сумма положительных: %f\n", sum);
    /* +=, *= - составные операторы присваивания, которые обновляют переменную, 
    выполняя определенную операцию со старым значением */
    return 0;
}
#include <stdio.h>

int recursive_func(int n){
    if(n == 0) return 0;
    return n*n + recursive_func(n-1);
}
int iterative_func(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++) sum += i*i;
    return sum;
}
int main(){
    // вариант 4
    int n;
    while(printf("Введите число: "), scanf("%d", &n) == 1 && n > 0){
        printf("Сумма квадратов от 1 до %d (рекурсивно): %d\n", n, recursive_func(n));
        printf("Сумма квадратов от 1 до %d (итеративно): %d\n", n, iterative_func(n));
    }
    printf("Некорректный ввод данных!\n");
    return 0;
}
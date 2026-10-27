#include <stdio.h>

int main(){
    // вариант 30
    int fib[16], fib_2[8]; float res; int x = 0;
    fib[0] = 0; fib[1] = 1; fib_2[x] = 0;

    printf("Исходный массив: 0 1");
    for (int i = 2; i < 16; i++){
        fib[i] = fib[i-1] + fib[i-2];
        printf(" %d", fib[i]);

        if (i % 2 == 0){
            fib_2[++x] = fib[i];
            res += fib_2[x];
        }
    }
    printf("\nОбработанный массив:"); 
    for (int j = 0; j < 8; j++) printf(" %d", fib_2[j]);

    printf("\nСреднее арифметическое: %.3f\n", res / 8);
    // arr[i] = *(arr + i), arr - указатель на первый элемент массива
    return 0;
}
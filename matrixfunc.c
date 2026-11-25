#include <stdio.h>
#include "matrixfunc.h"

void average_row(const int *arr, size_t i, size_t j) {
    for(size_t a = 0; a < i; a++) {
        int sum = 0;
        for(size_t b = 0; b < j; b++) sum += *(arr + a*j + b);
        printf("Среднее арифметическое %zu-й строки: %.2f\n", a+1, (double)sum/j);
    }
}
int count_minus(const int *arr, size_t i, size_t j) {
    int count = 0;
    for(size_t a = 0; a < i; a++) {
        for(size_t b = 0; b < j; b++) {
            if(*(arr + a*j + b) < 0) count++;
        }
    }
    return count;
}
void last_plus_in_row(const int *arr, size_t i, size_t j) {
    for(size_t a = 0; a < i; a++) {
        int last;
        if(*(arr + a*j + 0) > 0) last = *(arr + a*j + 0);
        else last = 0;
        for(size_t b = 1; b < j; b++) {
            if(*(arr + a*j + b) > 0) last = *(arr + a*j + b);
        }
        if(last > 0) printf("Последний положительный элемент %zu-й строки: %d\n", a+1, last);
        else printf("Положительных элементов в %zu-й строке нет\n", a+1);
    }
}
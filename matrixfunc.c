#include <stdio.h>
#include "matrixfunc.h"

void average_row(const int *matrix, size_t i, size_t j) {
    for(size_t a = 0; a < i; a++) {
        int sum = 0;
        for(size_t b = 0; b < j; b++) sum += *(matrix + a*100 + b);
        printf("Среднее арифметическое %zu-й строки: %.2f\n", a+1, (double)sum/j);
    }
}
int count_minus(const int *matrix, size_t i, size_t j) {
    int count = 0;
    for(size_t a = 0; a < i; a++) {
        for(size_t b = 0; b < j; b++) {
            if(*(matrix + a*100 + b) < 0) count++;
        }
    }
    return count;
}
int last_plus(const int *matrix, size_t i, size_t j) {
    int last;
    if(*(matrix + 0 + 0) > 0) last = *(matrix + 0 + 0);
    else last = 0;
    for(size_t a = 0; a < i; a++) {
        for(size_t b = 0; b < j; b++) {
            if(*(matrix + a*100 + b) > 0) last = *(matrix + a*100 + b);
        }
    }
    return last;
}
#include <stddef.h>
#include "myarrfunc.h"

int min_value(const int *arr, size_t n) {
    int min = arr[0]; // присваиваем 1-ое значение массива для сравнения с остальными
    for(size_t i = 1; i < n; i++) if(min > arr[i]) min = arr[i];
    return min;
}
int max_value(const int *arr, size_t n) {
    int max = arr[0]; // присваиваем 1-ое значение массива для сравнения с остальными
    for(size_t i = 1; i < n; i++) if(max < arr[i]) max = arr[i];
    return max;
}
double average_value(const int *arr, size_t n) {
    int sum = 0;
    for(size_t i = 0; i < n; i++) sum += arr[i];
    return (double)sum / n;
}
int sum_below_average(const int *arr, size_t n) {
    int sum = 0; double average = average_value(arr, n);
    for(size_t i = 0; i < n; i++) if(arr[i] < average) sum += arr[i];
    return sum;
}
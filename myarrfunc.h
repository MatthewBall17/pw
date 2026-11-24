#ifndef MYARRFUNC_H
#define MYARRFUNC_H

#include <stddef.h>

int min_value(const int *arr, size_t n);
int max_value(const int *arr, size_t n);
double average_value(const int *arr, size_t n);
int sum_below_average(const int *arr, size_t n);

#endif
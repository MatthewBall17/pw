#include <stdio.h>
#include <stdint.h>

int main(){
    // (111260335 + 7) % 30 + 1 = 3
    uint16_t w, h; scanf("%hu %hu", &w, &h);
    printf("Результат: %f\n", (float)(w * h)/ 10000);
    printf("Размер использованных типов: uint16 = %llu, ", (unsigned long long)sizeof(uint16_t));
    printf("float = %llu\n", (unsigned long long)sizeof(float));
    // без приведения к вещественному типу float было бы целочисленное деление
    return 0;
}
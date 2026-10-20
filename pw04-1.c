#include <stdio.h>

#define K 7

int main(){
    // 111260335 % 30 + 1 = 26
    int x;
    while (1){
        if (scanf("%u", &x) != 1 || x <= 0) break;
        printf("Время: %u дн или %u нед %u дн\n", x, x / K, x % K);
    }
    /* int/int возращает int, а в тип int нельзя записать дробь => дробная часть усекается,
    приводя знак деления к целочисленному */
    return 0;
}
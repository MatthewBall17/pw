#include <stdio.h>

int main(){
    int years = 18;
    int days = years * 365;
    int hours = days * 24;
    int sec = hours * 3600;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", sec, hours, days, years);
    return 0;
}
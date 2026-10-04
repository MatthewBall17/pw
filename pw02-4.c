#include <stdio.h>
#include <limits.h>

int main(){
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    
    printf("RANGE_OK: %d\n", (unsigned int)INT_MAX * 2u + 1u == UINT_MAX); 
    // иначе выражение выходит за пределы [INT_MIN; INT_MAX] => ошибка

    return 0;
}
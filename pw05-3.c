#include <stdio.h>

int main(){
    // вариант 24
    printf ("Количество слагаемых: ");
    int n; 
    while (scanf("%u", &n) == 1 && n > 0){
        float res = 0.0;
        for (int i = 1; i <= n; i++){
            res += (float)1 / (i * (i + 2));
        }
        printf("SUM: %f\n", res);
    }
    // при литерале 0 происходит преобразования int в float
    return 0;
}
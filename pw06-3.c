#include <stdio.h>

int main(){
    // вариант 24
    int x; int n = 0; int sum = 0;
    while(scanf("%d", &x) == 1 && x != 0){
        int tr_num = 0;
        if(x > 0) for(int i = 1; tr_num < x; i++){
            tr_num = i*(i+1)/2;
        }
        if(tr_num > x){
            n++; sum += x;
        }
    }
    printf("Количество нетреугольных чисeл: %d\n", n);
    printf("Их среднее арифметическое: %.2f\n", (float)sum / n);
    return 0;
}
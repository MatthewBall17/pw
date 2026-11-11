#include <stdio.h>

int main(){
    // вариант 30
    int n, k1 = 0, k2 = 0, k3 = 0; float x, royalty;
    printf("Тираж книги (шт.): "); 
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Некорректный ввод данных!\n"); return 0;
    }
    printf("Цена за экземпляр (руб.): ");
    if(scanf("%f", &x) != 1 || x < 0){
        printf("Некорректный ввод данных!\n"); return 0;
    }
    printf("Разбивка по тарифным ступеням:\n");
    if(n <= 10000){
        k1 = n; royalty = 0.1*k1*x; 
    }
    else if(n <= 50000){
        k1 = 10000; k2 = n-10000; royalty = 0.1*k1*x + 0.12*k2*x;
    }
    else {
        k1 = 10000; k2 = 40000; k3 = n-50000; royalty = 0.1*k1*x + 0.12*k2*x + 0.15*k3*x;
    }
    if(k1 > 0) printf("%d шт. * %.2f руб. * 10%% = %.2f руб.\n", k1, x, 0.1*k1*x);
    if(k2 > 0) printf("%d шт. * %.2f руб. * 12%% = %.2f руб.\n", k2, x, 0.12*k2*x);
    if(k3 > 0) printf("%d шт. * %.2f руб. * 15%% = %.2f руб.\n", k3, x, 0.15*k3*x);
    printf("Итоговое роялти: %.2f руб.\n", royalty);
    return 0;
}
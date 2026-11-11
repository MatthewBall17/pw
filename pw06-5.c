#include <stdio.h>

#define PI 3.141592653589

int x; float r, h, a;

void initialize(float *y){
    while(1){
        if(y == &r) printf("Радиус: ");
        else if(y == &h) printf("Высота: ");
        else if(y == &a) printf("Сторона: ");
        if(scanf("%f", y) == 1 && *y >= 0) break;
        printf("Некорректный ввод данных!\n");
        while(getchar() != '\n');
    }
}
int main(){
    // вариант 4
    while(1){
        printf("Калькулятор объёма\n");
        printf("1.Сфера (по радиусу)\n");
        printf("2.Куб (по стороне)\n");
        printf("3.Цилиндр (по радиусу и высоте)\n");
        printf("4.Конус (по радиусу и высоте)\n");
        printf("5.Выход\n");
        while(1){
            printf("Выберите пункт: ");
            if(scanf("%d", &x) == 1 && x >= 0) break;
            printf("Некорректный ввод данных!\n");
            while(getchar() != '\n');
        }
        if(x == 1 || x == 3 || x == 4) initialize(&r);
        if(x == 2) initialize(&a);
        if(x == 3 || x == 4) initialize(&h);
        switch(x){
            case 1: printf("Объем сферы: %.2f\n", 4*PI*r*r*r/3); break;
            case 2: printf("Объем куба: %.2f\n", a*a*a); break;
            case 3: printf("Объем цилиндра: %.2f\n", PI*r*r*h); break;
            case 4: printf("Объем конуса: %.2f\n", PI*r*r*h/3); break;
            case 5: return 0;
            default: printf("Такого пункта нет\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include "myarrfunc.h"

#define MAX_N 100

void menu(void) {
    printf("\na\tЗадать размер массива\n");
    printf("b\tЗаполнить массив\n");
    printf("c\tПредставление массива (значения, адреса)\n");
    printf("d\tОпределение максимального и минимального значения массива\n");
    printf("e\tВычисление среднего арифметического элементов всего массива\n");
    printf("f\tВычисление суммы элементов, значения которых ниже среднего значения массива\n");
    printf("g\tВыход\n");
    printf("Выберите пункт: ");
}
int main(void) {
    // вариант 5
    char point;
    int c, res, n = 0;
    int arr[MAX_N] = {0};
    int arr_occupancy = 0; // проверка на заполненность массива
    while(menu(), scanf(" %c", &point) == 1) {
        if(getchar() != '\n') {
            while((c = getchar()) != '\n' && c != EOF);
            if(c == EOF) return 0;
            printf("Введите один символ!\n");
            continue;
        }
        switch(point) {
            case 'a':
                while(printf("Введите размер массива: "), (res = scanf("%d", &n)) != 1 || n <= 0 || n > MAX_N) {  
                    if(res == EOF) return 0;
                    printf("Некорректный ввод данных!\n");
                    while((c = getchar()) != '\n' && c != EOF);
                }
                arr_occupancy = 0;
                break;
            case 'b':
                if(n > 0) {
                    int i = 0;
                    int x;
                    while(i < n) {
                        printf("Введите %d-й элемент массива: ", i+1);
                        if((res = scanf("%d", &x)) != 1) {
                            if(res == EOF) return 0;
                            printf("Некорректный ввод данных!\n");
                            while((c = getchar()) != '\n' && c != EOF);
                            continue;
                        }
                        arr[i++] = x;
                    }
                    arr_occupancy = 1;
                }
                else printf("Задайте размер массиву!\n");
                break;
            case 'c':
                if(n > 0) {
                    if(arr_occupancy) for(int i = 0; i < n; i++) {
                        printf("Индекс: %d\tАдрес: %p\tЗначение: %d\n", i, (void *)(arr+i), arr[i]);
                    }
                    else printf("Заполните массив!\n");
                }
                else printf("Задайте размер массиву!\n");
                break;
            case 'd':
                if(n > 0) {
                    if(arr_occupancy) {
                        printf("Минимальное значение массива: %d\n", min_value(arr, (size_t)n));
                        printf("Максимальное значение массива: %d\n", max_value(arr, (size_t)n));
                    }
                    else printf("Заполните массив!\n");
                }
                else printf("Задайте размер массиву!\n");
                break;
            case 'e':
                if(n > 0) {
                    if(arr_occupancy) printf("Среднее значение массива: %.2f\n", average_value(arr, (size_t)n));
                    else printf("Заполните массив!\n");
                }
                else printf("Задайте размер массиву!\n");
                break;
            case 'f': 
                if(n > 0) {
                    if(arr_occupancy) printf("Сумма элементов массива меньших среднего значения: %d\n", sum_below_average(arr, (size_t)n));
                    else printf("Заполните массив!\n");
                }
                else printf("Задайте размер массиву!\n");
                break;
            case 'g': printf("Завершение программы\n"); return 0;
            default: printf("Такого пункта нет! Повторите еще раз\n");
        }
    }
    return 0;
}
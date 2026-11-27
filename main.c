#include <stdio.h>
#include "matrixfunc.h"

#define MAX_I 100
#define MAX_J 100

void menu(void) {
    printf("\na\tЗадать размер матрицы (строки, столбцы)\n");
    printf("b\tЗаполнить матрицу\n");
    printf("c\tПредставление матрицы (значения, адреса элементов)\n");
    printf("d\tВычисление среднего арифметического элементов каждой строки матрицы\n");
    printf("e\tОпределение количества отрицательных элементов матрицы\n");
    printf("f\tПоиск значения последнего положительного элемента матрицы при обходе по строкам\n");
    printf("g\tВыход\n");
    printf("Выберите пункт: ");
}
int main(void) {
    // вариант 5
    char point;
    int c, res;
    int i = 0, j = 0;
    int matrix[MAX_I][MAX_J] = {0};
    int matrix_occupancy = 0; // проверка на заполненность матрицы
    while(menu(), scanf(" %c", &point) == 1) {
        if(getchar() != '\n') {
            while((c = getchar()) != '\n' && c != EOF);
            if(c == EOF) return 0;
            printf("Введите один символ!\n");
            continue;
        }
        switch(point) {
            case 'a':
                while(printf("Введите количество строк: "), (res = scanf("%d", &i)) != 1 || i <= 0 || i > MAX_I) {  
                    if(res == EOF) return 0;
                    printf("Некорректный ввод данных!\n");
                    while((c = getchar()) != '\n' && c != EOF);
                }
                while(printf("Введите количество столбцов: "), (res = scanf("%d", &j)) != 1 || j <= 0 || j > MAX_J) {  
                    if(res == EOF) return 0;
                    printf("Некорректный ввод данных!\n");
                    while((c = getchar()) != '\n' && c != EOF);
                }
                matrix_occupancy = 0;
                break;
            case 'b':
                if(i > 0 && j > 0) {
                    for(int a = 0; a < i; a++) {
                        int b = 0, x;
                        while(b < j) {
                            printf("Введите элемент %d-й строки %d-й столбца: ", a+1, b+1);
                            if((res = scanf("%d", &x)) != 1) {
                                if(res == EOF) return 0;
                                printf("Некорректный ввод данных!\n");
                                while((c = getchar()) != '\n' && c != EOF);
                                continue;
                            }
                            matrix[a][b++] = x;
                        }
                    }
                    matrix_occupancy = 1;
                }
                else printf("Задайте размер матрице!\n");
                break;
            case 'c':
                if(i > 0 && j > 0) {
                    if(matrix_occupancy) for(int a = 0; a < i; a++) {
                        for(int b = 0; b < j; b++) {
                            printf("Cтрока: %d\tСтолбец: %d\tАдрес: %p\tЗначение: %d\n", a+1, b+1, &matrix[a][b], matrix[a][b]);
                        }
                    }
                    else printf("Заполните матрицу!\n");
                }
                else printf("Задайте размер матрице!\n");
                break;
            case 'd':
                if(i > 0 && j > 0) {
                    if(matrix_occupancy) average_row(&matrix[0][0], (size_t)i, (size_t)j);
                    else printf("Заполните матрицу!\n");
                }
                else printf("Задайте размер матрице!\n");
                break;
            case 'e':
                if(i > 0 && j > 0) {
                    if(matrix_occupancy) printf("Количество отрицательных элементов: %d\n", count_minus(&matrix[0][0], (size_t)i, (size_t)j));
                    else printf("Заполните матрицу!\n");
                }
                else printf("Задайте размер матрице!\n");
                break;
            case 'f': 
                if(i > 0 && j > 0) {
                    if(matrix_occupancy) {
                        if(last_plus(&matrix[0][0], (size_t)i, (size_t)j)) {
                            printf("Последний положительный элемент матрицы: %d\n", last_plus(&matrix[0][0], (size_t)i, (size_t)j));
                        }
                        else printf("Положительных элементов в матрице нет!\n");
                    }
                    else printf("Заполните матрицу!\n");
                }
                else printf("Задайте размер матрице!\n");
                break;
            case 'g': printf("Завершение программы\n"); return 0;
            default: printf("Такого пункта нет! Повторите еще раз\n");
        }
    }
    return 0;
}
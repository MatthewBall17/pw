#include <stdio.h>
#include <ctype.h>

int main(){
    // вариант 18
    int c, letters = 0, res = 0, total = 0;
    while((c = tolower(getchar())) != EOF){
        if(c > 127){
            letters = 0; continue;
        }
        total++;

        if(c == 't') letters = 1;
        else if(letters == 1 && c == 'i') letters = 2;
        else if(letters == 2 && c == 'o') letters = 3;
        else if(letters == 3 && c == 'n'){
            res++; letters = 0;
        }
        else letters = 0;
    }
    printf("\nКоличество вхождений последовательности \"tion\": %d\n", res);
    printf("Общее количество обработанных символов: %d\n", total);
    return 0;
}
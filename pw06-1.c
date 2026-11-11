#include <stdio.h>
#include <ctype.h>

int main(){
    // вариант 26
    int c; int x = 0; int escape_char = 0;
    while((c = getchar()) != EOF){
        if(escape_char == 0 && c == '#') break;

        if(escape_char){
            if(isgraph(c)) x++;
            escape_char = 0;
        }
        else if(c == '\\') escape_char = 1;
    }
    printf("Количество экранированных символов: %d\n", x);
    return 0;
}
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
    // вариант 18
    setlocale(LC_ALL, "");
    wint_t wc; int x = 0; 
    while((wc = getwchar()) != L'#' && wc != WEOF){
        if(wc == L'о'){
            putwchar(L'0'); x++;
        }
        else putwchar(wc);
    }
    wprintf(L"\nКоличество замен: %d\n", x);
    /* getchar() читает байты => один символ может вернуть несколькими вызовами, возвращает int
    getwchar() читает символ, возвращает wint_t, зависит от локали */
    return 0;
}
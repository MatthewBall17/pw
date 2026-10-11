#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

const char s[] = "Сбой матрицы";
const wchar_t ws[] = L"Сбой матрицы";

int main(){
    setlocale(LC_ALL, "");
    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(s), strlen(s));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(ws), wcslen(ws));

    return 0;
}
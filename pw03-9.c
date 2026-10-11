#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    wchar_t username[20]; wscanf(L"%ls", username);
    wprintf(L"Агент %ls авторизован в системе\n", username);

    return 0;
}
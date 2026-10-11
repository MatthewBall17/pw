#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    wchar_t a[20], b[20], c[20]; wscanf(L"%ls %ls %ls", a, b, c);
    wprintf(L"%-15ls|%20ls|%.5ls\n", a, b, c);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char s[20] = "СибГУТИ";
    printf("SIZEOF: %zu\nSTRLEN: %zu\nFREE_BYTES: %zu\n", sizeof(s), strlen(s), sizeof(s) - strlen(s) - 1);
    // в кодировке UTF-8 символы кириллицы = 2 байта, латыни = 1 байт

    return 0;
}
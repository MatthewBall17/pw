#include <stdio.h>
#include <string.h>

#define DISTRO "LinuxDistro"

const char RDATE[] = "2026";

int main(){
    printf("DISTRO: %s\nRDATE: %s\n", DISTRO, RDATE);
    printf("STRLEN: %zu\nSIZEOF: %zu\n", strlen(DISTRO), sizeof(DISTRO));
    // длина литерала = количество символов в байтах, размер = длина литерала + '\0'

    return 0;
}
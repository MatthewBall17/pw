#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";
    printf("%sSTRLEN: %zu\nSIZEOF: %zu\n", s, strlen(s), sizeof(s));

    return 0;
}
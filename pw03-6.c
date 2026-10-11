#include <stdio.h>

int main(){
    char s[20]; int width; scanf("%s %d", s, &width);
    printf("%*s\n%-*s\n", width, s, width+5, s);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char username[20]; scanf("%s", username);
    printf("\"%s\"\n", username);
    printf("\"%18s\"\n", username);
    printf("\"%-18s\"\n", username);
    printf("\"%*s     \"\n", (int)strlen(username) + 5, username);

    return 0;
}
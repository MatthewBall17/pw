#include <stdio.h>
#include <string.h>

int main(){
    char hostname[] = "host-15";
    char name_gr[] = "Матвей\tИС-641";
    
    int len1 = strlen(hostname);
    int len2 = strlen(name_gr);
    printf("%s\t{%d}\n%s\t{%d}", hostname, len1, name_gr, len2);
    return 0;
}
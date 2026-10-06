#include <stdio.h>
#include <string.h>

int main(){
    char hostname[] = "host-15";
    char name_gr[] = "Матвей\tИС-641";

    printf("%s\t{%zu}\n%s\t{%zu}\n", hostname, strlen(hostname), name_gr, strlen(name_gr));
    return 0;
}
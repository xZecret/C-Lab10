#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char * s = "1234567890";
    char * c = (char *) malloc(strlen(s) + 2);
    strcpy(c, s);
    printf("copy >> %s\n", c);
    strncpy(c + 2, "123", 3);
    printf("mod >> %s\n", c);
}
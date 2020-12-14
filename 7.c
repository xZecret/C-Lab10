#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_dup(char *s)
{
    char *c = s;
    while (*(c++))
        continue;
    int len = c-s;
    c = malloc(len);
    for (int i = 0; i < len; i++)
        *(c + i) = *(s + i);
    return c;
}

int main()
{
    char *s = "1234567890";
    char *c = strdup(s);
    char *d = str_dup(s);
    printf("s>> %s\n", s);
    printf("c>> %s\n", c);
    printf("d>> %s\n", d);
}
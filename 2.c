#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10], b[10], c[10], d[10];
    scanf("%s%s%s%s", a, b, c, d);
    char *s = (char *)malloc(strlen(a) + strlen(b) + strlen(c) + strlen(d) + 2);
    strcat(s, a);
    strcat(s, b);
    strcat(s, c);
    strcat(s, d);
    printf("%s\n", s);
}
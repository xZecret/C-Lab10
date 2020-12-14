#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s = "1234567890";
    strnset(s + 2, '-', 3);
    strset(s + 5, '+');
    printf(">> %s\n", s);
}
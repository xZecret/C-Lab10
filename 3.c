#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[4][16], *l;
    for (int i = 0; i < 4; i++)
        scanf("%s", s[i]);
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (i != j)
                printf("(%d, %d) >> %d\n", i, j, strcmp(s[i], s[j]));
}
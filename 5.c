#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr;
    ptr = strtok("Feb. 15, 2001", "./");
    printf("%s/n", ptr);
    while (ptr)
    {
        ptr = strtok(NULL, ".,-/");
        if (ptr)
            printf("%s/n", ptr); 
            else break;
    }
}
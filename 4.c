#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char list[] = "Тхаркахов Носиков Рудзей Новиков Али Погорелов", search[20];
    scanf("%s", search);
    if(strstr(list, search)) 
        printf("%s - Есть", search);
    else 
        printf("%s - Нету такой фамилии", search);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jawab;
    do{
        printf("Apakah Anda ingin mengulang lagi (y/t)?");
        scanf("%c", &jawab);
        fflush(stdin);
    } while (jawab == 'y');

    return 0;
}
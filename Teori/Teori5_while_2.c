#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jawab = 'y';
    while(jawab == 'y'){
        printf("Apakah Anda ingin mengulang lagi (y/t)?");
        scanf("%c", &jawab);
        fflush(stdin);
    }

    return 0;
}
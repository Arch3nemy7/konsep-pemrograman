#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jawab;
    do{
        int i;
        for (i =1; i <=3; i++){
            printf("%d\t", i);
        }
        printf("\n");
        printf("Apakah Anda ingin mengulang lagi (y/t)?");
        scanf("%c", &jawab);
        fflush(stdin);
    } while (jawab == 'y');
    printf("Selesai\n");

    return 0;
}
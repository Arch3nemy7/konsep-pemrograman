#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bilangan;
    char jawab;
    do{
        printf("Masukkan bilangan bulat : ");
        scanf("%i", &bilangan);
        if (bilangan % 2 == 1) continue;
        printf("Bilangan yang dimasukkan adalah = %d\n", bilangan);
        fflush(stdin);
        printf("Ingin memasukkan lagi (y/t)?");
        scanf("%c", &jawab);
    } while (jawab == 'y');

    return 0;
}
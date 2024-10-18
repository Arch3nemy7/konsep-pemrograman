#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        int bilangan;
        printf("Masukkan bilangan bulat : ");
        scanf("%d", &bilangan);
        if (bilangan % 2 == 1)
            break;
        printf("bilangan yang dimasukkan adalah %d\n", bilangan);
    }
}
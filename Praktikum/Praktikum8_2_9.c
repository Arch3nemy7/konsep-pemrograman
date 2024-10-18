#include <stdio.h>
#include <stdlib.h>

void myFunc(int *, int);

#define PANJANG 5

int main()
{
    int bilangan, bil[PANJANG] = {1, 2, 3, 4, 5}, *pbil = bil;

    system("cls");
    printf("Masukkan bilangan : ");
    scanf("%i", &bilangan);
    myFunc(pbil, bilangan);

    return 0;
}

void myFunc(int *num, int target)
{
    int i;

    for (i = 0; i < PANJANG; i++) {
        if (target == *num++){
            printf("Ada");
            exit(EXIT_SUCCESS);
        }
    }
    
    printf("Tidak ada");
}
#include <stdio.h>
#include <stdlib.h>
#define MAKS 11

void input();
int sisip();

int data[MAKS], posisi, bilangan, jumlah;

int main()
{
    input();
    sisip();

    return 0;
}

void input()
{
    printf("Berapa jumlah elemen : ");
    scanf("%i", &jumlah);
    
    for (int i = 0; i < jumlah; i++) {
        printf("data[%i] = ", i);
        scanf("%i", &data[i]);
        fflush(stdin);
    }
}

int sisip()
{
    printf("Bil : ");
    scanf("%i", &bilangan);
    printf("pcc : ");
    scanf("%i", &posisi);

    for (int i = jumlah; i > posisi - 1; i--) {
        data[i] = data[i - 1];
    }

    data[posisi - 1] = bilangan;

    for (int i = 0; i <= jumlah; i++) {
        printf("data[%d] = %d\n", i, data[i]);
    }
    
    return 0;
}
#include<stdio.h>

int main()
{
    float bilangan, hasil;

    printf("Masukkan sembarang bilangan desimal = ");
    scanf("%f", &bilangan);

    hasil = bilangan * 50;
    printf("Jumlah %f dikali 50 adalah %f", bilangan, hasil);

    return 0;
}
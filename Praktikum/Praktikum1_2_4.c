#include<stdio.h>

int main()
{
    int bil_1;
    int bil_2;
    int sum;
    
    printf("Masukkan bilangan pertama : ");
    scanf("%i", &bil_1);
    printf("Masukkan bilangan kedua : ");
    scanf("%i", &bil_2);

    sum = bil_1 + bil_2;

    printf("Jumlah %i + %i adalah %i", bil_1, bil_2, sum);

    return 0;
}
#include <stdio.h>

int main()
{
    int tahun;

    puts("Apakah tahun ini tahun kabisat ?");
    printf("Masukkan sembarang tahun : ");
    scanf("%i", &tahun);

    if (tahun % 4 == 0)
    {
        printf("Tahun %i merupakan tahun kabisat.", tahun);
    } else
        printf("Tahun %i bukan merupakan tahun kabisat", tahun);

    return 0;
}
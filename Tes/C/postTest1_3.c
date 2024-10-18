#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int tahun;

    puts("#------Memeriksa suatu tahun apakah tersebut merupakan tahun kabisat atau bukan------#");
    printf("Masukkan sembarang tahun yang ingin diperiksa : ");
    scanf("%i", &tahun);

    if ((tahun % 4 == 0) && (tahun % 100 != 0))
        printf("Tahun %i adalah tahun kabisat", tahun);
    else if (tahun % 400 == 0)
        printf("Tahun %i adalah tahun kabisat", tahun);
    else
        printf("Tahun %i bukan tahun kabisat", tahun);
    
    return 0;
}
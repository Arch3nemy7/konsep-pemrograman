#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, hasil = 0, urutan = 1;
    char jwb = 'y';

    puts("#------Mencari total angka yang telah dimasukkan------#");
    do {
        printf("Masukkan bilangan bulat ke-%i :", urutan++);
        scanf("%i", &bil);
        fflush(stdin);

        printf("Mau memasukkan data lagi [y/t] ?");
        jwb = getchar();
        fflush(stdin);

        hasil = hasil + bil;
    } while (jwb == 'y' || jwb == 'Y');

    printf("Total bilangan = %i", hasil);
    
    return 0;
}
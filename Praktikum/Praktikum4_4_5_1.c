#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, bil;
    char jawaban = 't';

    puts("#------Membuat segi empat dari angka dengan panjang sisi yang telah diinputkan------#");
    do {
        printf("Masukkan sembarang bilangan bulat : ");
        if (scanf("%i", &bil) == 1)
            bil = bil;
        else {
            printf("Masukkan sembarang bilangan BULAT!");
            exit(EXIT_FAILURE);
        }
        fflush(stdin);

        for(i = 1; i <= bil; i++){
            for(j = 1; j <= bil; j ++){
                printf("%i", j);
            }
        printf("\n", i);
        }

        printf("apakah anda ingin keluar (y/t)?");
        jawaban = getchar();
        fflush(stdin);
    } while (jawaban == 't');

    return 0;
}
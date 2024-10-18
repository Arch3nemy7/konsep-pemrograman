#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, k = 0, bil;
    char jawaban = 'y';

    puts("#------Menampilkan pola bilangan +1 +2 +3 ... sampai bilangan ke-n------#");
    do {
        printf("Masukkan sembarang bilangan bulat : ");
        scanf("%i", &bil);

        for(i = 1; i <= bil; i++){
            for(j = 1; j <= bil; j++){
                printf("%i ", k);
                k = k + j;

                if (j == bil)
                    exit(EXIT_SUCCESS);
            }
        }
        
        printf("\napakah anda ingin keluar (y/t)?");
        jawaban = getchar();
        fflush(stdin);
    } while (jawaban == 'y');
    
    return 0;
}
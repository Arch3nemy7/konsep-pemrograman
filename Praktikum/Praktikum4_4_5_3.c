#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, bil, prime;
    char jawaban = 'y';

    puts("#------Menampilkan bilangan prima sampai bilangan ke-n------#");
    do {
        printf("Masukkan sembarang bilangan bulat : ");
        scanf("%i", &bil);
        fflush(stdin);

        for(i = 1; i <= bil; i++){
            prime = 1;
            for(j = 2; j < i; j++){
                if (i % j == 0){
                    prime = 0;
                    break;
                }
            }
            if ((prime == 1) && (i != 1))
                printf("%i ", i);
        }

        printf("\napakah anda ingin keluar (y/t)?");
        jawaban = getchar();
        fflush(stdin);
    } while (jawaban == 't');
    

    return 0;
}
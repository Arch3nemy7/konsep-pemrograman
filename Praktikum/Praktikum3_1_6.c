#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil;

    puts("#------Menentukan apakah bilangan tersebut terletak di antara 1-100------#");
    printf("Masukkan sembarang bilangan bulat : ");
    if (scanf("%i", &bil) == 1)
        bil = bil;
    else{
        puts("Masukkan sembarang bilangan BULAT!");
        exit(EXIT_FAILURE);
    }

    if ((bil <= 100) && (bil >= 1)){
        printf("Bilangan %i ada di antara 1-100", bil);
    } else
        printf("Bilangan %i tidak ada di antara 1-100", bil);

    return 0;
}
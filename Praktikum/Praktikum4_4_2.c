#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, j, bil;

    puts("#------Membuat segi tiga dari angka dengan panjang alas yang telah diinputkan------#");
    printf("Masukkan sembarang bilangan bulat : ");
    if (scanf("%i", &bil) == 1)
        bil = bil;
    else {
        printf("Masukkan sembarang bilangan BULAT!");
        exit(EXIT_FAILURE);
    }

    for(i = 1; i <= bil; i++){
        for(j = 1; j <= i; j ++){
            printf("%i", j);
        }
    printf("\n", i);
    }

    return 0;
}
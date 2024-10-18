#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, hasil = 0;

    puts("#------Penjumlahan bilangan triangular-----#");
    printf("Masukkan sembarang bilangan cacah : ");
    if ((scanf("%i", &bil) == 1)  && (bil >= 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan CACAH!");
        exit(EXIT_FAILURE);
    }

    for (int i = bil; i >= 1; i--){
        hasil = hasil + i;
    }

    printf("%i", hasil);

    return 0;
}
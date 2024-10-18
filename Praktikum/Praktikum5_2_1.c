#include <stdio.h>
#include <stdlib.h>

int ganjil(int);

int ganjil(int n)
{
    if (n % 2 != 0)
        // printf("%i merupakan bilangan ganjil", n);
        n = 1;
    else
        // printf("%i merupakan bilangan genap", n);
        n = 0;
    
    return n;
}

int main()
{
    int bil, hasil;

    puts("Identifikasi bilangan ganjil atau genap.");
    printf("Masukkan sembarang bilangan asli : ");
    if ((scanf("%i", &bil) == 1)  && (bil > 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan ASLI!");
        exit(EXIT_FAILURE);
    }
    hasil = ganjil(bil);

    if (hasil == 1)
        printf("%i merupakan bilangan ganjil", bil);
    else
        printf("%i merupakan bilangan genap", bil);

    return 0;
}
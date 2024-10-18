#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil;
    
    puts("#------Menentukan apakah bilangan yang dimasukkan bilangan ganjil atau genap------#");
    printf("Masukkan sembarang bilangan bulat : ");
    if (scanf("%i", &bil) == 1)
        bil = bil;
    else{
        puts("Masukkan sembarang bilangan BULAT!");
        exit(EXIT_FAILURE);
    }

    if ((bil >= 0) && (bil % 2 == 0))
        printf("Bilangan yang dimasukkan adalah %i.\n%i adalah bilangan genap", bil, bil);
    else if ((bil <= 0) && (bil % -2 == 0))
        printf("Bilangan yang dimasukkan adalah %i.\n%i adalah bilangan genap", bil, bil);
    else if ((bil >= 0) && (bil % 2 != 0))
        printf("Bilangan yang dimasukkan adalah %i.\n%i adalah bilangan ganjil", bil, bil);
    else
        printf("Bilangan yang dimasukkan adalah %i.\n%i adalah bilangan ganjil", bil, bil);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int faktorial(int);

int faktorial(int n)
{
    int i, hasil = 1;
    
    for (i = n; i >= 1; i--)
        hasil = hasil * i;
    
    return hasil;
}

int main()
{
    int bil, hasil;

    puts("#------Mencari nilai faktorial dari sebuah bilangan------#");
    printf("Masukkan sembarang bilangan cacah : ");
    if ((scanf("%i", &bil) == 1)  && (bil >= 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan CACAH!");
        exit(EXIT_FAILURE);
    }
    hasil = faktorial(bil);
    printf("nilai faktorial dari %i adalah %i", bil, hasil);

    return 0;
}
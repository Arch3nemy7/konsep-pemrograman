#include <stdio.h>
#include <stdlib.h>

int prima(int);

int prima(int n)
{
    int i, prime, faktor = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            faktor++;
        else 
            continue;

    if (faktor == 2)
        prime = 1;
    else 
        prime = 0;
    
    return prime;
}

int main()
{
    int bil, hasil;

    puts("#------Memeriksa apakah bilangan tersebut bilangan prima atau bukan------#");
    printf("Masukkan sembarang bilangan asli : ");
    if ((scanf("%i", &bil) == 1)  && (bil > 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan ASLI!");
        exit(EXIT_FAILURE);
    }
    hasil = prima(bil);

    if (hasil == 1)
        printf("%i adalah bilangan prima", bil);
    else
        printf("%i bukan bilangan prima", bil);

    return 0;
}
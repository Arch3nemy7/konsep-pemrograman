#include <stdio.h>
#include <stdlib.h>

float minmax(float, float);

float minmax(float n, float m)
{
    float minimum, maximum;
    if (n < m){
        maximum = m;
    }
    else{
        maximum = n;
    }
        
    return maximum;
}

int main()
{
    float bil1, bil2, maximum;

    puts("#------Mencari nilai maksimum dari dua buah bilangan------#");
    printf("Masukkan sembarang bilangan real pertama : ");
    if ((scanf("%f", &bil1) == 1)  && (bil1 > 0))
        bil1 = bil1;
    else{
        printf("Masukkan sembarang bilangan REAL!");
        exit(EXIT_FAILURE);
    }
    printf("Masukkan sembarang bilangan real pertama : ");
    if ((scanf("%f", &bil2) == 1)  && (bil2 > 0))
        bil2 = bil2;
    else{
        printf("Masukkan sembarang bilangan REAL!");
        exit(EXIT_FAILURE);
    }
    maximum = minmax(bil1, bil2);

    printf("Bilangan yang paling besar adalah %g", maximum);

    return 0;
}
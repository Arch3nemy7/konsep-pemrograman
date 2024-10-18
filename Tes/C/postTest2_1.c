#include <stdio.h>
#include <stdlib.h>

void terbalik(int);

int main()
{
    int bil;

    puts("#------Membalikkan sebuah bilangan------#");
    printf("Masukkan sembarang bilangan : ");
    scanf("%i", &bil);
    terbalik(bil);

    return 0;
}

void terbalik(int num)
{
    int sisa;
    
    while(num != 0){
        sisa = num % 10;
        num = num / 10;
        printf("%i", sisa);
    }
}
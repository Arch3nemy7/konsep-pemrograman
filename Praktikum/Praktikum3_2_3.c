#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;

    puts("#------Konversi nilai angka ke dalam huruf------#");
    printf("Masukkan nilai : ");
    if (scanf("%i", &nilai) == 1)
        nilai = nilai;
    else{
        puts("Masukkan sembarang bilangan BULAT!");
        exit(EXIT_FAILURE);
    }

    if ((nilai <= 100) && (nilai > 80)){
        putchar('A');
    } else if ((nilai <= 80) && (nilai > 60)){
        putchar('B');
    } else if ((nilai <= 60) && (nilai > 55)){
        putchar('C');
    } else if ((nilai <= 55) && (nilai > 40)){
        putchar('D');
    } else if (nilai < 40){
        putchar('E');
    } else
        printf("Masukkan nilai yang benar. Exiting.");

    return 0;
}
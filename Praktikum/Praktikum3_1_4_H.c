#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, faktor;

    faktor = 0;

    puts("#------Menentukan apakah bilangan tersebut merupakan bilangan prima------#");
    printf("Masukkan sembarang bilangan positif : ");
    if ((scanf("%i", &bil) == 1) && (bil >= 0))
        bil = bil;
    else{
        puts("Masukkan sembarang bilangan POSITIF!");
        exit(EXIT_FAILURE);
    }

    if ((bil > 1) && (bil <= 10)){
        if (bil % 1 == 0)
            faktor += 1;
        if (bil % 2 == 0)
            faktor += 1;
        if (bil % 3 == 0)
            faktor += 1;
        if (bil % 4 == 0)
            faktor += 1;
        if (bil % 5 == 0)
            faktor += 1;
        if (bil % 6 == 0)
            faktor += 1;
        if (bil % 7 == 0)
            faktor += 1;
        if (bil % 8 == 0)
            faktor += 1;
        if (bil % 9 == 0)
            faktor += 1;
    }

    if (bil > 10){
        if (bil % 1 == 0)
            faktor += 1;
        if (bil % 2 == 0)
            faktor += 1;
        if (bil % 3 == 0)
            faktor += 1;
        if (bil % 4 == 0)
            faktor += 1;
        if (bil % 5 == 0)
            faktor += 1;
        if (bil % 6 == 0)
            faktor += 1;
        if (bil % 7 == 0)
            faktor += 1;
        if (bil % 8 == 0)
            faktor += 1;
        if (bil % 9 == 0)
            faktor += 1;
        if (bil % 11 == 0)
            faktor += 1;
        if (bil % 13 == 0)
            faktor += 1;
        if (bil % 17 == 0)
            faktor += 1;
        if (bil % 19 == 0)
            faktor += 1;
        if ((bil % bil == 0) && (bil != 11) && (bil != 13) && (bil != 17) && (bil != 19))
            faktor += 1;
        if (faktor == 1)
            faktor += 1;
    }

    // if (faktor == 1){
    //     faktor++;
    // }

    if (faktor == 2){
        printf("%i merupakan bilangan prima.", bil);
    } else
        printf("%i bukan bilangan prima.", bil);

    return 0;
}
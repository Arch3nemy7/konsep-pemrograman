#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS 99999

int main()
{
    char str[MAKS], panjang;

    system("cls");

    puts("#------Mencari panjang sebuah kata atau kalimat------#");
    printf("Masukkan sembarang kata atau kalimat : ");
    fgets(str, sizeof str, stdin);

    str[strlen(str) - 1] = '\0';
    printf("Panjang karakter = %i", strlen(str));

    return 0;
}
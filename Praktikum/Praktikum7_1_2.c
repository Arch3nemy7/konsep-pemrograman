#include <stdio.h>
#include <stdlib.h>

#define MAKS 99999

void pjgstr(char []);

int main()
{
    char str[MAKS];

    system("cls");

    puts("#------Mencari panjang sebuah kata atau kalimat------#");
    printf("Masukkan sembarang kata atau kalimat : ");
    fgets(str, sizeof str, stdin);
    pjgstr(str);

    return 0;
}

void pjgstr(char sebuahstr[])
{
    int i, jumkar = 0;

    for(i = 0; sebuahstr[i] != '\0'; i++){
        jumkar++;
    }

    printf("Jumlah karakter = %i", jumkar - 1);
}
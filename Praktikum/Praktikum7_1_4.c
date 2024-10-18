#include <stdio.h>
#include <stdlib.h>

#define MAKS 99999

void copystr(char [], char []);

int main()
{
    char str[MAKS], str2[MAKS];

    system("cls");

    puts("#------Menyalin suatu array of char ke array of char lain------#");
    printf("Masukkan sembarang kata atau kalimat : ");
    fgets(str, sizeof str, stdin);
    copystr(str, str2);

    return 0;
}

void copystr(char sebuahstr[], char sebuahstr2[])
{
    int i;

    for(i = 0; sebuahstr[i] != '\0'; i++){
        sebuahstr2[i] = sebuahstr[i];
    }

    printf("Asal : %s", sebuahstr);
    printf("Salin : %s", sebuahstr2);
}
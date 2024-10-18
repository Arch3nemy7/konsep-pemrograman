#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS 99999

void copystr(char [], char []);

int main()
{
    char str[MAKS], str2[MAKS];

    system("cls");

    puts("#------Menyalin suatu array of char ke array of char lain------#");
    printf("Masukkan sembarang kata atau kalimat : ");
    fgets(str, sizeof str, stdin);
    strcpy(str2, str);
    printf("Asal : %s", str);
    printf("Salin : %s", str2);

    return 0;
}
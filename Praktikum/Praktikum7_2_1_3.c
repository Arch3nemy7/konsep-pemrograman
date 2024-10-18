#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS 99999

int main()
{
    char str[MAKS];

    system("cls");

    puts("#------Membalik sebuah kata atau kalimat------#");
    printf("Masukkan sembarang kata atau kalimat : ");
    fgets(str, sizeof str, stdin);

    str[strlen(str) - 1] = '\0';
    printf("Dibalik menjadi : %s", strrev(str));

    return 0;
}
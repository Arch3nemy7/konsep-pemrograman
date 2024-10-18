#include <stdio.h>
#include <stdlib.h>

#define MAKS 99999

int pjgstr(char []);
void balikstr(char [], int);

int main()
{
    int panjangstr;
    char str[MAKS];

    system("cls");

    puts("#------Membalik sebuah kata atau kalimat------#");
    printf("Masukkan sembarang kata atau kalimat : ");
    fgets(str, sizeof str, stdin);
    panjangstr = pjgstr(str);
    balikstr(str, panjangstr);

    return 0;
}

int pjgstr(char sebuahstr[MAKS])
{
    int i, jumkar = 0;

    for(i = 0; sebuahstr[i] != '\0'; i++){
        jumkar++;
    }

    return jumkar - 1;
}

void balikstr(char sbhstr[MAKS], int panjstr)
{
    int i;

    for (i = panjstr - 1; i >= 0; i--){
        printf("%c", sbhstr[i]);
    }   
}
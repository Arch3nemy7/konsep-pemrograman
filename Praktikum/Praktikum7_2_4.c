#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS 99999

int main()
{
    char str1[MAKS], str2[MAKS], hasil[2];

    system("cls");
    
    puts("#------Membandingkan hasil strcmp dengan strcmpi------#");
    printf("Masukkan sembarang kata atau kalimat pertama : ");
    fgets(str1, sizeof str1, stdin);
    printf("Masukkan sembarang kata atau kalimat kedua : ");
    fgets(str2, sizeof str2, stdin);

    hasil[0] = strcmp(str1, str2);
    hasil[1] = strcmpi(str1, str2);

    printf("Hasil strcmp = %i\n", hasil[0]);
    printf("Hasil strcmpi = %i", hasil[1]);

    return 0;
}
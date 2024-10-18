#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nama[7], kar = 'A';

    system("cls");

    puts("#------Perbedaan scanf, gets, & fgets------#");
    printf("Masukkan nama Anda : ");
    scanf("%s", nama);
    gets(nama);
    fgets(nama, sizeof nama, stdin);

    printf("Karakter : %c\n", kar);
    printf("Nama Anda adalah : %s\n", nama);

    return 0;
}
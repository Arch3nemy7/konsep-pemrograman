#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nama[100];
    char str1[] = "ABA";
    char str2[] = "ac";

    system("cls");

    scanf("%s", nama);
    // gets(nama);
    // fgets(nama, sizeof nama, stdin);

    printf("Nama Anda adalah : %s\n", nama);
    printf("Jumlah karakter : %i\n", strlen(nama));
    printf("Hasil perbandingan %s dengan %s --> %d\n", str1, str2, strcmp(str1, str2));
}
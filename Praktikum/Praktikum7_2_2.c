#include <stdio.h>
#include <stdlib.h>

#define MAKS 99999

int pjgstr(char []);
int bandingstr1(char [], char []);
void cetak(int);

int main()
{
    int hasil;
    char str1[MAKS], str2[MAKS];

    system("cls");

    puts("#------Membandingkan 2 buah string (Case Sensitive)------#");
    printf("Masukkan sembarang kata atau kalimat pertama : ");
    fgets(str1, sizeof str1, stdin);
    printf("Masukkan sembarang kata atau kalimat kedua : ");
    fgets(str2, sizeof str2, stdin);

    hasil = bandingstr1(str1, str2);
    cetak(hasil);

    return 0;
}

int pjgstr(char sebuahstr[])
{
    int i, jumkar = 0;

    for(i = 0; sebuahstr[i] != '\0'; i++){
        jumkar++;
    }

    return jumkar - 1;
}

int bandingstr1(char sebuahstr1 [], char sebuahstr2 [])
{
    int i, nilai = 0;

    for (i = 0; i < pjgstr(sebuahstr1) || i < pjgstr(sebuahstr2); i++) {
        if (sebuahstr1[i] > sebuahstr2[i]) {
            nilai = 1;
            break;
        } else if (sebuahstr1[i] < sebuahstr2[i]) {
            nilai = -1;
            break;
        }
    }

    return nilai;
}

void cetak(int result)
{
    if (result == 0)
        printf("Kalimat yang Anda masukkan SAMA");
    else
        printf("Kalimat yang Anda masukkan TIDAK SAMA");
}
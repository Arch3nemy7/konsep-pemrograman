#include <stdio.h>
#include <stdlib.h>

#define MAKS 99999

int pjgstr(char []);
int bandingstr2(char [], char []);
void cetak(int);

int main()
{
    int hasil;
    char str1[MAKS], str2[MAKS];

    system("cls");

    puts("#------Membandingkan 2 buah string (Non Case Sensitive)------#");
    printf("Masukkan sembarang kata atau kalimat pertama : ");
    fgets(str1, sizeof str1, stdin);
    printf("Masukkan sembarang kata atau kalimat kedua : ");
    fgets(str2, sizeof str2, stdin);

    hasil = bandingstr2(str1, str2);
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

int bandingstr2(char sebuahstr1[], char sebuahstr2 [])
{
    int i, nilai = 0, temp1, temp2;

    for (i = 0; i < pjgstr(sebuahstr1) || i < pjgstr(sebuahstr2); i++) {
        temp1 = sebuahstr1[i];
        temp2 = sebuahstr2[i];
        if (temp1 >= 65 && temp1 <= 90) {
            temp1 += 32;
        } if (temp2 >= 65 && temp2 <= 90) {
            temp2 += 32;
        } if (temp1 == temp2) {
            continue;
        } else if (temp1 > temp2) {
            nilai = 1;
            break;
        } else {
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
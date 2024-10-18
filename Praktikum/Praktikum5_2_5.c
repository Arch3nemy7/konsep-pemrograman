#include <stdio.h>
#include <stdlib.h>

float konversi(float, char, char);

int main()
{
    float suhu, hasil;
    char asal, tujuan;

    puts("#------Konversi suhu ke C, F, atau R------#");
    printf("Masukkan suhu sumber = ");
    scanf("%f", &suhu);
    fflush(stdin);
    printf("Masukkan satuan asal (C, F, R) = ");
    asal = getchar();
    fflush(stdin);
    printf("Masukkan satuan tujuan (C, F, R) = ");
    tujuan = getchar();
    fflush(stdin);

    hasil = konversi(suhu, asal, tujuan);
    printf("Konversi suhu %g derajat dari %c ke %c adalah %g", suhu, asal, tujuan, hasil);

    return 0;
}

float konversi(float suhu, char asal, char tujuan)
{
    float hasil;
    
    if (asal == 'C' && tujuan == 'F')
        suhu = (suhu * 9 / 5) + 32;
    else if (asal == 'C' && tujuan == 'R')
        suhu = suhu * 4 / 5 ;
    else if (asal == 'F' && tujuan == 'C')
        suhu = ((suhu - 32) * 5) / 9;
    else if (asal == 'F' && tujuan == 'R')
        suhu = ((suhu - 32) * 4) / 9;
    else if (asal == 'R' && tujuan == 'C')
        suhu =  (suhu * 5) / 4;
    else if (asal == 'R' && tujuan == 'F')
        suhu = ((suhu * 9) / 4) + 32;
    else{
        puts("Input salah. Exiting.");
        exit(EXIT_FAILURE);
    }

    return suhu;
}

#include <stdio.h>

int main()
{
    int berat, tinggi, hasil;

    printf("Masukkan berat badan anda (kg) : ");
    scanf("%i", &berat);
    fflush(stdin);
    printf("Masukkan tinggi badan anda (cm) : ");
    scanf("%i", &tinggi);

    hasil = tinggi - berat;

    if (hasil > 120){
        printf("Berat badan Anda tidak ideal. Turunkan berat badan Anda.");
    } else if ((hasil <= 120) && (hasil > 110)){
        printf("Berat badan Anda ideal. Pertahankan.");
    } else if ((hasil <= 110) && (hasil >= 100)){
        printf("Berat badan Anda tidak ideal. Naikkan berat badan Anda.");
    } else if (hasil > 100){
        printf("Berat badan Anda sangat tidak ideal. Naikkan berat badan Anda.");
    } else 
        printf("Masukkan nilai berat dan tinggi badan Anda yang benar. Exiting");

    return 0;
}
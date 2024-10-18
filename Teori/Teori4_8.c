#include <stdio.h>

int main()
{
    int operasi;
    float sisi, tinggi, radius, luas, volume;

    const float PI = 3.14;

    puts("Pilihlah angka operasi di bawah ini yang ingin kamu lakukan : ");
    puts("1. Menghitung volume kubus");
    puts("2. Menghitung luas lingkaran");
    puts("3. Menghitung volume silinder");
    printf("Pilihan : ");
    scanf("%i", &operasi);

    switch (operasi)
    {
        case 1:
            printf("Masukkan panjang sisi kubus dalam cm : ");
            scanf("%f", &sisi);

            volume = sisi * sisi * sisi;
            printf("Volume dari balok yang memiliki panjang sisi %.2f cm adalah %.2f cm^3", sisi, volume);
            break;
        
        case 2:
            printf("Masukkan jari-jari lingkaran dalam cm : ");
            scanf("%f", &radius);

            luas = PI * radius * radius;
            printf("Luas dari lingkaran yang memiliki panjang jari-jari %.2f cm adalah %.2f cm^2", radius, luas);
            break;

        case 3:
            printf("Masukkan panjang jari-jari lingkaran alas silinder cm : ");
            scanf("%f", &radius);
            printf("Masukkan panjang tinggi silinder dalam cm : ");
            scanf("%f", &tinggi);

            volume = PI * radius * radius * tinggi;
            printf("Volume dari silinder yang memiliki tinggi %.2f cm dan jari-jari %.2f cm adalah %.2f cm^3", tinggi, radius, volume);
            break;

        default:
            printf("Unknown operator. Exiting");
    }

    return 0;
}
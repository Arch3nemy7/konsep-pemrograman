#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operasi;
    float sisi, tinggi, radius, luas, volume;

    const float PI = 3.14;

    puts("#------Kalkulator penghitung volume kubus, luas lingkaran, atau volume silinder------#");
    puts("Pilihlah angka operasi di bawah ini yang ingin Anda lakukan :");
    puts("1. Menghitung Volume Kubus");
    puts("2. Menghitung Luas Lingkaran");
    puts("3. Menghitung Volume Silinder");
    printf("Pilihan : ");
    scanf("%i", &operasi);

    switch (operasi)
    {
        case 1:
            printf("Masukkan panjang sisi kubus dalam cm : ");
            if (scanf("%f", &sisi) == 1)
                sisi = sisi;
            else{
                puts("Masukkan panjang sisi kubus yang benar!");
                exit(EXIT_FAILURE);
            }

            volume = sisi * sisi * sisi;
            printf("Volume dari balok yang memiliki panjang sisi %.2f cm adalah %.2f cm^3", sisi, volume);
            break;
        
        case 2:
            printf("Masukkan jari-jari lingkaran dalam cm : ");
            if (scanf("%f", &radius) == 1)
                radius = radius;
            else{
                puts("Masukkan panjang jari-jari lingkaran yang benar!");
                exit(EXIT_FAILURE);
            }

            luas = PI * radius * radius;
            printf("Luas dari lingkaran yang memiliki panjang jari-jari %.2f cm adalah %.2f cm^2", radius, luas);
            break;

        case 3:
            printf("Masukkan panjang jari-jari lingkaran alas silinder cm : ");
            if (scanf("%f", &radius) == 1)
                radius = radius;
            else{
                puts("Masukkan panjang jari-jari lingkaran yang benar!");
                exit(EXIT_FAILURE);
            }
            printf("Masukkan panjang tinggi silinder dalam cm : ");
            if (scanf("%f", &tinggi) == 1)
                tinggi = tinggi;
            else{
                puts("Masukkan tinggi silinder yang benar!");
                exit(EXIT_FAILURE);
            }

            volume = PI * radius * radius * tinggi;
            printf("Volume dari silinder yang memiliki tinggi %.2f cm dan jari-jari %.2f cm adalah %.2f cm^3", tinggi, radius, volume);
            break;

        default:
            printf("Unknown operator. Exiting.");
    }

    return 0;
}
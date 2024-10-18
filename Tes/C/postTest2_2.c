#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu(void);
float tambah(float, float);
float kurang(float, float);
float kali(float, float);
float bagi(float, float);
float modulus(float, float);

int main()
{
    int pilihan;
    float bil1, bil2, hasil;
    char kar;

    do{
        puts("#------Kalkulator------#");
        pilihan = menu();

        printf("Masukkan 2 operand, pisahkan dengan koma : ");
        scanf("%f, %f", &bil1, &bil2);
        fflush(stdin);

        switch (pilihan)
        {
        case 1:
            hasil = tambah(bil1, bil2);
            break;
        case 2:
            hasil = kurang(bil1, bil2);
            break;
        case 3:
            hasil = kali(bil1, bil2);
            break;
        case 4:
            hasil = bagi(bil1, bil2);
            break;
        case 5:
            hasil = modulus(bil1, bil2);
            break;    
        default:
            puts("Pilihan Anda tidak ada. Exiting");
            exit(EXIT_FAILURE);
            break;
        }

        printf("Hasil = %g\n", hasil);
        printf("Lagi (y/t) ? : ");
        kar = getchar();
        fflush(stdin);
    } while (kar == 'y' || kar == 'Y');

    puts("Selesai");

    return 0;
}

int menu(void)
{
    int choice;

    puts("Menu kalkulator");
    puts("1. Tambah");
    puts("2. Kurang");
    puts("3. Kali");
    puts("4. Bagi");
    puts("5. Modulus");
    printf("Pilihan Anda : ");
    scanf("%i", &choice);

    return choice;
}

float tambah(float bil1, float bil2)
{
    return bil1 + bil2;
}

float kurang(float bil1, float bil2)
{
    return bil1 - bil2;
}

float kali(float bil1, float bil2)
{
    return bil1 * bil2;
}

float bagi(float bil1, float bil2)
{
    return bil1 / bil2;
}

float modulus(float bil1, float bil2)
{
    return fmod(bil1, bil2);
}
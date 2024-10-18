#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gajiPokok = 2000000, pilihan, gajiTotal, gajiTunjangan;
    char sertifikasi;

    puts("Menghitung total honor pegawai");
    puts("Pilihan pekerjaan :");
    puts("1. Programmer Junior");
    puts("2. Programmer Senior");
    puts("3. Data Analis");
    puts("4. Project Manager");
    puts("5. Lainnya");
    printf("Masukkan angka pilihan sesuai pekerjaan Anda saat ini : ");
    scanf("%i", &pilihan);
    fflush(stdin);
    
    switch (pilihan)
    {
        case 1 :
            gajiTunjangan = 1000000;
            break;
        case 2 :
            gajiTunjangan = 1250000;
            break;
        case 3 :
            gajiTunjangan = 1500000;
            break;
        case 4 :
            gajiTunjangan = 2000000;
            break;
        case 5 :
            gajiTunjangan = 500000;
            break;
        default :
            puts("Pilihan tidak ada. Exiting.");
            exit(EXIT_FAILURE);
    }

    printf("Apakah Anda memiliki sertifikasi? (y/t) : ");
    scanf("%c", &sertifikasi);

    if (sertifikasi == 'y')
        gajiTotal = gajiPokok + gajiTunjangan + (gajiTunjangan * 0.1);
    else if (sertifikasi == 't')
        gajiTotal = gajiPokok + gajiTunjangan;
    else{
        puts("Pilihan tidak ada. Exiting");
        exit(EXIT_FAILURE);
    }

    printf("Gaji Anda adalah %i", gajiTotal);

    return 0;
}
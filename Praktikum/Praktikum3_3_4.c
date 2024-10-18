#include <stdio.h>

int main()
{
    int pilihan;

    puts("Pilih hari yang Anda inginkan");
    puts("1. Senin");
    puts("2 Selasa");
    puts("3. Rabu");
    puts("4. Kamis");
    puts("5. Jumat");
    puts("6. Sabtu");
    puts("7. Minggu");
    printf("Masukkan pilihan Anda : ");
    scanf("%i", &pilihan);

    switch (pilihan)
    {
        case 1:
            puts("Pilihan Anda = Senin");
            break;
        case 2:
            puts("Pilihan Anda = Selasa");
            break;
        case 3:
            puts("Pilihan Anda = Rabu");
            break;
        case 4:
            puts("Pilihan Anda = Kamis");
            break;
        case 5:
            puts("Pilihan Anda = Jumat");
            break;
        case 6:
            puts("Pilihan Anda = Sabtu");
            break;
        case 7:
            puts("Pilihan Anda = Minggu");
            break;
        default:
            puts("Pilihan Anda tidak ada. Exiting.");
            break;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operasi;
    float bil_1, bil_2, jumlah, kurang, kali, bagi, mod;

    puts("#------Kalkulator sederhana------#");
    printf("Masukkan sembarang bilangan pertama : ");
    if (scanf("%i", &bil_1) == 1)
        bil_1 = bil_1;
    else{
        puts("Masukkan bilangan yang benar!");
        exit(EXIT_FAILURE);
    }
    fflush(stdin);
    printf("Masukkan sembarang bilangan kedua : ");
    if (scanf("%i", &bil_2) == 1)
        bil_2 = bil_2;
    else{
        puts("Masukkan bilangan yang benar!");
        exit(EXIT_FAILURE);
    }
    fflush(stdin);
    puts("Pilihlah nomor operasi bilangan di bawah ini yang Anda inginkan : ");
    puts("1. PENJUMLAHAN");
    puts("2. PENGURANGAN");
    puts("3. PEMBAGIAN");
    puts("4. PERKALIAN");
    printf("Pilihan : ");
    scanf("%i", &operasi);

    if (operasi == 1){
        jumlah = bil_1 + bil_2;
        printf("Hasil %.2f + %.2f adalah %.2f", bil_1, bil_2, jumlah);
    } else if (operasi == 2){
        kurang = bil_1 - bil_2;
        printf("Hasil %.2f - %.2f adalah %.2f", bil_1, bil_2, kurang);
    } else if (operasi == 3){
        bagi = bil_1 / bil_2;
        printf("Hasil %.2f / %.2f adalah %.2f", bil_1, bil_2, bagi);
    } else if (operasi == 4){
        kali = bil_1 * bil_2;
        printf("Hasil %.2f x %.2f adalah %.2f", bil_1, bil_2, kali);
    } else
        printf("Masukkan operasi bilangan yang sesuai. Exiting.\n");

    return 0;
}
#include <stdio.h>

int main()
{
    int operasi;
    float bil_1, bil_2, jumlah, kurang, bagi, kali;

    printf("Masukkan sembarang bilangan pertama : ");
    scanf("%f", &bil_1);
    fflush(stdin);
    printf("Masukkan sembarang bilangan kedua : ");
    scanf("%f", &bil_2);
    fflush(stdin);
    puts("Pilihlah nomor operasi bilangan di bawah ini yang diinginkan : ");
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
        printf("Hasil %.2f - %.2f adalah %.2f", bil_1, bil_2, bagi);
    } else if (operasi == 4){
        kali = bil_1 * bil_2;
        printf("Hasil %.2f x %.2f adalah %.2f", bil_1, bil_2, kali);
    }
    else
        printf("Masukkan operasi bilangan yang sesuai. Exiting.\n");

    return 0;
}
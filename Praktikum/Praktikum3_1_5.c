#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int operasi;
    float bil_1, bil_2, jumlah, kurang, kali, bagi, mod;

    puts("#------Kalkulator sederhana------#");
    printf("Masukkan sembarang bilangan pertama : ");
    if (scanf("%f", &bil_1) == 1)
        bil_1 = bil_1;
    else{
        printf("Masukkan bilangan yang benar!");
        exit(EXIT_FAILURE);
    }
    fflush(stdin);
    
    printf("Masukkan sembarang bilangan kedua : ");
    if (scanf("%f", &bil_2) == 1)
        bil_2 = bil_2;
    else{ 
        printf("Masukkan bilangan yang benar!");
        exit(EXIT_FAILURE);
    }
    fflush(stdin);

    puts("Pilihlah nomor operasi bilangan di bawah ini yang Anda inginkan : ");
    puts("1. PENJUMLAHAN");
    puts("2. PENGURANGAN");
    puts("3. PEMBAGIAN");
    puts("4. PERKALIAN");
    puts("5. MODULUS");
    printf("Pilihan : ");
    scanf("%i", &operasi);

    if (operasi == 1){
        jumlah = bil_1 + bil_2;
        printf("Hasil %.3f + %.3f adalah %.3f", bil_1, bil_2, jumlah);
    } else if (operasi == 2){
        kurang = bil_1 - bil_2;
        printf("Hasil %.3f - %.3f adalah %.3f", bil_1, bil_2, kurang);
    } else if (operasi == 3){
        bagi = bil_1 / bil_2;
        printf("Hasil %.3f / %.3f adalah %.3f", bil_1, bil_2, bagi);
    } else if (operasi == 4){
        kali = bil_1 * bil_2;
        printf("Hasil %.3f x %.3f adalah %.3f", bil_1, bil_2, kali);
    } else if (operasi == 5){
        mod = fmod(bil_1, bil_2);
        printf("Hasil %.3f %% %.3f adalah %.3f", bil_1, bil_2, mod);
    } else
        printf("Masukkan operasi bilangan yang sesuai. Exiting.\n");

    return 0;
}
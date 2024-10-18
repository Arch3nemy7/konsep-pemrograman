#include <stdio.h>
#include <string.h>

int main()
{
    system("cls");
    int bil_1, bil_2, bil_1_kuadrat, bil_2_kuadrat, hasil_kuadrat, operasi, jumlah, kuadrat;
    float rata;

    printf("Masukkan sembarang bilangan pertama : ");
    scanf("%i", &bil_1);
    printf("Masukkan sembarang bilangan kedua : ");
    scanf("%i", &bil_2);
    puts("Pilihlah nomor operasi bilangan di bawah ini yang diinginkan : ");
    puts("1. PENJUMLAHAN");
    puts("2. RATA-RATA");
    puts("3. KUADRAT");
    printf("Pilihan : ");
    scanf("%i", &operasi);

    if (operasi == 1)
    {
        jumlah = bil_1 + bil_2;
        printf("Jumlah %i + %i adalah %i", bil_1, bil_2, jumlah);
    }
    else if (operasi == 2)
    {
        rata = (bil_1 + bil_2) / 2.0f;
        printf("Rata-rata dari %i + %i adalah %g", bil_1, bil_2, rata);
    }
    else if (operasi == 3)
    {
        bil_1_kuadrat = bil_1 * bil_1;
        bil_2_kuadrat = bil_2 * bil_2;
        hasil_kuadrat = bil_1_kuadrat + bil_2_kuadrat;
        printf("Jumlah kuadrat dari %i + %i adalah %i", bil_1, bil_2, hasil_kuadrat);
    }
    else
        printf("Masukkan operasi bilangan yang sesuai. Exiting.\n");

    return 0;
}
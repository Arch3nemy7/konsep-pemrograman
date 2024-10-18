#include <stdio.h>
#include <stdlib.h>

float masukan(int);
float average(int, float);

int main()
{
    float total, rata;
    int banyak;

    puts("#------Menghitung rata-rata sesuai jumlah dan banyak data yang dimasukkan------#");
    printf("Masukkan berapa banyak data yang akan Anda masukkan : ");
    scanf("%i", &banyak);
    total = masukan(banyak);
    rata = average(banyak, total);
    printf("Rata-rata %i data dengan total %g adalah %g", banyak, total, rata);

    return 0;
}

float masukan(int banyakData)
{
    int i;
    float bil, hasil = 0;

    for(i = 1; i <= banyakData; i++){
        printf("Masukkan bilangan ke-%i : ", i);
        scanf("%f", &bil);
        fflush(stdin);
        hasil = hasil + bil;
    }
    
    return hasil;
}

float average(int banyakData, float totalData)
{
    float rata;

    rata = totalData / banyakData;

    return rata;
}

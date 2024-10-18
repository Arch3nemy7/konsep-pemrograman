#include <stdio.h>

int main()
{
    //tipe-data nama-variabel;

    int bil, bil1, bil2, sisaBagi, total, hasil, celcius, a, b, umur, abad, dd, mm, yyyy;
    float luas, radius, fahrenheit, desimal, decimal;
    char skala = 'F', nama[40] = "Andrey Pratama Gunawan", kar, namaKedua[40];
    long long nrp;

    bil = 10, total = 5;

    // #define HRF 'A'
    // #define PI 3.14f
    // #define MAX 10
    // #define DEC 27.5
    // #define KALIMAT "Deklarasi Konstanta"

    const char HRF = 'A';
    const float PI = 3.14;
    const int MAX = 10;
    const double DEC = 27.5;
    const char KALIMAT[20] = "Deklarasi Konstanta";

    hasil = bil + total;
    
    celcius = 30;
    fahrenheit = celcius * 1.8 + 32;
    
    a = b = 15;
    a += 2;
    a -= 2;
    a *= 2;
    a /= 2;
    a %= 2;
    a <<= 2;
    a >>= 2;
    a &= 2;
    a |= 2;
    a ^= 2;

    radius = 7.0;

    nrp = 3122600049;
    umur = 18;

    abad = 20;

    desimal = 34.5671829f;

    printf("bil > total adalah %s\n", bil > total ? "benar" : "salah");

    printf("hasil penjumlahan %i dan %i adalah %i\n", bil, total, hasil);
    printf("hasil perkalian %i dan %i adalah %i\n", bil, total, bil*total);

    printf("Masukkan nilai bilangan pertama : ");
    scanf("%i", &bil1);
    printf("Masukkan nilai bilangan kedua : ");
    scanf("%i", &bil2);
    sisaBagi = bil1 % bil2;
    printf("Sisa pembagian %i dengan %i adalah %i\n", bil1, bil2, sisaBagi);

    bil = ++total;
    printf("bil = %i, total = %i\n", bil, total);

    bil = total++;
    printf("bil = %i, total = %i\n", bil, total);

    printf("%g %c\n", fahrenheit, skala);

    printf("Luas \\ \"lingkaran\" \t dengan radius = %f dan PI = %f adalah %f\n", radius, PI, radius*PI*PI);

    printf("NRP\t : %lli\n", nrp);
    printf("Nama\t : %s\n", nama);
    printf("Umur\t : %i\n", umur);

    printf("Abad %4d\n", abad);

    printf("Bilangan desimal adalah %5.2f\n", desimal);

    printf("%12s", "Bahasa C\n");
    printf("%-12s", "Bahasa C\n");

    puts("teks_yang_akan_ditampilkan");
    puts("Kalimat 1");
    puts("Kalimat 2");

    putchar('A');
    putchar('\n');
    printf("%c\n", 'A');

    printf("Masukkan bilangan desimal : ");
    scanf("%f", &decimal);
    printf("Bilangan yang dimasukkan adalah %f\n", decimal);

    printf("Masukkan tanggal dengan format dd mm yyyy : ");
    scanf("%i %i %i", &dd, &mm, &yyyy);
    printf("Tanggal yang dimasukkan adalah : %i-%i-%i\n", dd, mm, yyyy);

    printf("Masukkan sebuah huruf : ");
    kar = getchar();
    scanf("%c", &kar);
    fflush(stdin);

    printf("Masukkan nama Anda : ");
    gets(namaKedua);
    printf("Nama yang dimasukkan adalah %s", namaKedua);

    return 0;
}
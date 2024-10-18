#include <stdio.h>
#include <stdlib.h>

struct date {
    int hari, bulan, tahun;
} harini, besok;

void input();
void hitung();
int cek(int, int);

int main()
{
    system("cls");

    hitung();

    return 0;    
}

void input()
{
    printf("\nMasukkan tanggal hari ini (mm-dd-yyyy)\t: ");
    scanf("%i-%i-%i", &harini.hari, &harini.bulan, &harini.tahun);
}

void hitung()
{
    char lagi;

    do {
        input();

        if(harini.hari + 1 > cek(harini.bulan, harini.tahun)) {
            if(harini.bulan == 12) {
                besok.hari = 1;
                besok.bulan = 1;
                besok.tahun = harini.tahun + 1;
            }else {
                besok.hari = 1;
                besok.bulan = harini.bulan + 1;
                besok.tahun = harini.tahun;
            }
        }else {
            besok.hari =  harini.hari + 1;
            besok.bulan = harini.bulan;
            besok.tahun = harini.tahun;
        }

        printf("Maka tanggal besok adalah \t \t: %02i-%02i-%2i", besok.hari, besok.bulan, besok.tahun);
        fflush(stdin);
        printf("\nIngin memasukkan tanggal lagi? [Y/T] : ");
        lagi = getchar();
        fflush(stdin);
    } while(lagi == 'Y' || lagi == 'y');
}

int cek(int month, int year)
{
    int jumHari, daftarHari[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    jumHari = daftarHari[month - 1];

    if(month == 2 && year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            jumHari = 29;
        }
    }

    return jumHari;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int h, m, s;
} time;

time waktu[2];
int jumlah, hour, minute, second, sisa;

void input(void);
void hitung(void);
void tampil(void);

int main()
{
    input();
    hitung();
    tampil();

    return 0;
}

void input()
{
    puts("Enter start time:");
    printf("Enter hours, minutes, and seconds respectively (hh:mm:ss) : ");
    scanf("%i:%i:%i", &waktu[0].h, &waktu[0].m, &waktu[0].s);
    puts("Enter stop time:");
    printf("Enter hours, minutes, and seconds respectively (hh:mm:ss) : ");
    scanf("%i:%i:%i", &waktu[1].h, &waktu[1].m, &waktu[1].s);
}

void hitung()
{
    for (int i = 0; i <= 1; i++) {
        waktu[i].s += waktu[i].h * 3600;
        waktu[i].s += waktu[i].m * 60;
    }

    if(waktu[0].s > waktu[1].s)
        jumlah = waktu[0].s - waktu[1].s;
    else
        jumlah = waktu[1].s - waktu[0].s;

    hour = jumlah / 3600;

    sisa = jumlah % 3600;

    minute = sisa / 60;

    second = sisa % 60;
}

void tampil()
{
    printf("Time difference: %i:%i:%i", hour, minute, second);
}
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int h, m, s;
} time;

time waktu[2];
int detik[2] = {0, 0}, jumlah, hour, minute, second, sisa;

void input();
void tampil();

int main()
{
    
    scanf("%i:%i:%i", &waktu[0].h, &waktu[0].m, &waktu[0].s);
    scanf("%i:%i:%i", &waktu[1].h, &waktu[1].m, &waktu[1].s);

    detik[0] = waktu[0].h * 3600;    
    detik[0] += waktu[0].m * 60;    
    detik[0] += waktu[0].s;

    detik[1] = waktu[1].h * 3600;    
    detik[1] += waktu[1].m * 60;    
    detik[1] += waktu[1].s;

    if(detik[0] > detik[1])
        jumlah = detik[0] - detik[1];
    else
        jumlah = detik[1] - detik[0];

    hour = jumlah / 3600;

    sisa = jumlah % 3600;

    minute = sisa / 60;

    second = sisa % 60;

    printf("%2i:%2i:%2i", hour, minute, second);

    return 0;
}
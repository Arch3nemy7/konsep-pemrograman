#include <stdio.h>
#include <stdlib.h>

void main() {
    int bln, thn, jhari;
    int jum_hari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    puts("MEMPEROLEH JUMLAH HARI");
    puts("PADA SUATU BULAN DAN SUATU TAHUN");
    puts("--------------------------------");
    printf("Masukkan bulan (1..12) : ");
    scanf("%d", &bln);
    printf("Masukkan tahunnya : ");
    scanf("%d", &thn);
    if(bln == 2)
        if(thn % 4 == 0) //thn kabisat
            jhari = 29;
        else
            jhari = 28;
    else
        jhari = jum_hari[bln-1];
    printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n",bln,thn,jhari);
}
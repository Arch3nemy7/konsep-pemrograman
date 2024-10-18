#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAKS 9999

typedef struct {
    char nama[100];
    float tugas, uts, uas, akhir;
} data;

typedef struct {
    char nama[100];
    float nilai;
} maks;

int banyak;

void input(data []);
void tampil(data []);

int main()
{
    data mhs[MAKS];

    system("cls");

    input(mhs);
    tampil(mhs);

    return 0;
}

void input(data datamhs[])
{
    int i;

    printf("Berapa Jumlah mahasiswa ? ");
    scanf("%i", &banyak);
    fflush(stdin);

    for(i = 0; i < banyak; i++) {
        printf("\nMahasiswa ke-%i", i + 1);

        printf("\nNama\t\t : ");
        fgets(datamhs[i].nama, sizeof (datamhs[i].nama), stdin);
        datamhs[i].nama[strlen(datamhs[i].nama) - 1] = '\0';
        fflush(stdin);
        
        printf("Nilai Tugas\t : ");
        scanf("%f", &datamhs[i].tugas);
        fflush(stdin);
        
        printf("Nilai UTS\t : ");
        scanf("%f", &datamhs[i].uts);
        fflush(stdin);
        
        printf("Nilai UAS\t : ");
        scanf("%f", &datamhs[i].uas);
        fflush(stdin);
    }

}

void tampil(data datamhs[])
{
    int i = 0;
    float akhir = 0;
    maks max = {"", 0};

    puts("\t\t\tDAFTAR NILAI");
    puts("\t\tMATAKULIAH KONSEP PEMROGRAMAN");
    puts("---------------------------------------------------------------------");
    puts("No\tNama\t\tNilai     Nilai     Nilai     Akhir     Grade");
    puts("\tMahasiswa\tTugas     UTS       UAS");
    puts("---------------------------------------------------------------------");

    for(i = 0; i < banyak; i++) {
        datamhs[i].akhir = 0.2 * datamhs[i].tugas + 0.4 * datamhs[i].uts + 0.4 * datamhs[i].uas;
        
        if(max.nilai == 0 || datamhs[i].akhir > max.nilai) {
            max.nilai = datamhs[i].akhir;
            strcpy(max.nama, datamhs[i].nama);
        }
        printf("%i\t%s\t\t%g\t\t%g\t%g\t%g\t%c\n", i + 1, datamhs[i].nama, datamhs[i].tugas, datamhs[i].uts, datamhs[i].uas, datamhs[i].akhir, datamhs[i].akhir >= 80 ? 'A' : datamhs[i].akhir >= 70 ? 'B' : datamhs[i].akhir >= 60 ? 'C' : datamhs[i].akhir >= 50 ? 'D' : 'E');
    }
    puts("---------------------------------------------------------------------");
    
    printf("\nTotal Mahasiswa = %i", banyak);
    puts("\nNilai tertinggi");
    printf("Nama\t\t= %s", max.nama);
    printf("\nNilai tertinggi\t= %g", max.nilai);
}
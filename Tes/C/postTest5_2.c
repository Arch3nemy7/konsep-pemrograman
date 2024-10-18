#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int d, m, y;
} date;

typedef struct {
    char nama[20];
    date dob;
    float nilai;
} student;

void input(student *);
void tampil(student *);


int main()
{
    student mhs;

    input(&mhs);
    tampil(&mhs);

    return 0;
}

void input(student *mahasiswa)
{
    printf("Nama : ");
    fgets(mahasiswa->nama, sizeof(mahasiswa->nama), stdin);
    fflush(stdin);
    printf("Tgl Lahir : ");
    scanf("%i-%i-%i", &mahasiswa->dob.d, &mahasiswa->dob.m, &mahasiswa->dob.y);
    fflush(stdin);
    printf("Nilai : ");
    scanf("%f", &mahasiswa->nilai);
    fflush(stdin);
}

void tampil(student *mahasis)
{
    puts("");
    puts("Hasil Output :");
    puts("");
    printf("Nama : %s", mahasis->nama);
    printf("Tgl Lahir : %i-%i-%i\n", mahasis->dob.d, mahasis->dob.m, mahasis->dob.y);
    printf("Nilai : %g", mahasis->nilai);
}
#include <stdio.h>
#include <stdlib.h>

#define BARIS 4
#define KOLOM 3

void input();
void rata();

float nilai[BARIS][KOLOM];
char *nama[] = {"Ahmad", "Adang", "Dani", "Edi"};
char *matkul[] = {"BAHASA", "MATEMATIKA", "DIGITAL"};

int main()
{
    system("cls");

    puts("#------Mencari nilai rata-rata mahasiswa------#");
    input();
    rata();
    
    return 0;
}

void input()
{    
    for(int i = 0; i < BARIS; i++){
        printf("\n#------Nilai %s------#\n", nama[i]);
        for(int j = 0; j < KOLOM; j++){
            printf("Masukkan nilai %s untuk %s : ", matkul[j], nama[i]);
            scanf("%f", &nilai[i][j]);
        }
    }
}

void rata()
{
    float hasil;

    for(int i = 0; i < BARIS; i++){
        hasil = 0;
        for(int j = 0; j < KOLOM; j++){
            hasil = hasil + nilai[i][j];
        }
        printf("\n#------Nilai rata-rata %s------#\n", nama[i]);
        printf("Nilai rata-rata %s adalah %g\n\n", nama[i], hasil / KOLOM);
    }
}
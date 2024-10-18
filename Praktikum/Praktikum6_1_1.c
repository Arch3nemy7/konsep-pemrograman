#include <stdio.h>
#include <stdlib.h>

#define MAKS 100

int input(int []);
void cetak(int, int []);

int main()
{
    int jumlah_data, nilai[MAKS];

    system("cls");

    puts("#------Memasukkan bilangan ke dalam Array dan mencetaknya------#");
    jumlah_data = input(nilai);
    cetak(jumlah_data, nilai);

    return 0;
}

int input(int numbers[])
{
    int banyak;

    printf("Masukkan banyak bilangan yang Anda inginkan : ");
    if (scanf("%i", &banyak) == 1)
        banyak = banyak;
    else {
        printf("Masukkan banyak bilangan yang benar!");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < banyak; i++){
        printf("Bilangan ke-%i : ", i + 1);
        scanf("%i", &numbers[i]);
        fflush(stdin);
    }

    return banyak;
}

void cetak(int maksimal, int bilangan[])
{
    printf("\nBilangan yang telah dimasukkan yaitu : \n");

    for(int i = 0; i < maksimal; i++){
        printf("Bilangan ke-%i adalah %i\n", i + 1, bilangan[i]);
    }
}
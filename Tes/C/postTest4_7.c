#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS 99999

void menu(void);
void input(void);
int hitung(int *);
void tampil(void);
void hasil(int);

int jumlah[MAKS], i = 0;
char pilihan[MAKS];

int main()
{
    int total = 0;

    system("cls");

    menu();
    input();
    tampil();
    total = hitung(&total);
    hasil(total);

    return 0;
}

void menu()
{
    puts("DAFTAR HARGA");
    puts("Kode\tJenis\tHarga Per Potong");
    puts("D\tDada\tRp. 5000.00");
    puts("P\tPaha\tRp. 4000.00");
    puts("S\tSayap\tRp. 3000.00");
    puts("");
    puts("Harga belum termasuk pajak : 10%%");
    puts("");
}


void input()
{
    char jawab;

    do
    {
        printf("Pesanan ke-%i\n", i + 1);
        printf("Jenis [D/P/S]\t: ");
        scanf("%c", &pilihan[i]);
        fflush(stdin);
        printf("Jumlah\t\t: ");
        scanf("%i", &jumlah[i]);
        fflush(stdin);
        printf("Ada lagi (y/t) ? ");
        fflush(stdin);
        jawab = getchar();
        fflush(stdin);
        puts("");
        i += 1;
    } while (jawab == 'Y' || jawab == 'y');
}

int hitung(int *totalHarga)
{
    int harga;
    char jenis[6];

    for (int j = 0; j < i; j++) {
        switch (pilihan[j]) {
        case 'D':
        case 'd':
            strcpy(jenis, "DADA");
            harga = 5000;
            break;
        case 'P':
        case 'p':
            strcpy(jenis, "PAHA");
            harga = 4000;
            break;
        case 'S':
        case 's':
            strcpy(jenis, "SAYAP");
            harga = 3000;
            break;
        default:
            printf("Pilihan tidak ada. Exiting.");
            exit(EXIT_FAILURE);
        }
        printf("\n%d\t%s\t\tRp.%.2i\t\t%i\tRp.%6.2i", j + 1, jenis, harga, jumlah[j], harga * jumlah[j]);
        *totalHarga = *totalHarga + (harga * jumlah[j]);
    }
    return *totalHarga;
}

void tampil()
{
    puts("\nNota Belanja Anda :\n");
    puts("\t\t\tGEROBAK FRIED CHICKEN\n");
    puts("===========================================================================");
    puts("No\tJenis Potong\tHarga Satuan\tQty\tTotal Harga");
    printf("===========================================================================");
}

void hasil(int total)
{
    printf("\n===========================================================================");
    printf("\nJumlah bayar\tRp.  %6.2i", total);
    printf("\nPajak 10%%\tRp.  %6.2i", total / 10);
    printf("\nTotal bayar\tRp.  %6.2i", total + total / 10);
}
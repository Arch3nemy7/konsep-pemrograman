#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pilihanMenu {
    char kode;
    int banyak;
} pesanan[30];

int i;

void menu();
int input();
int hitung();
void menu2();
void hasil(int);

int main()
{
    int harga = 0;

    system("cls");

    input();
    harga = hitung();
    hasil(harga);

    return 0;
}

void menu()
{
    printf("#------Toko Laris------#");
    printf("\nDAFTAR HARGA\n");
    printf("\nKode Jenis Harga Per Potong");
    printf("\n S    Small    Rp.36.000");
    printf("\n M    Medium    Rp.43.000");
    printf("\n L    Large   Rp.62.000");
    printf("\nDapatkan diskon 20%% untuk pembelian lebih dari 10 potong...");
    printf("\n\n*Harga belum termasuk pajak 10%%");
    printf("\n\n Masukkan Pesanan Anda");
}

void menu2()
{
    printf("\n\n#------Nota Belanja Anda------#\n");
    printf("\n#------Toko LARIS------#\n");
    printf("\n===========================================================================");
    printf("\nNo\tNama Ukuran\tHarga Satuan\tQty\tDiskon\tJumlah Harga");
    printf("\n===========================================================================");
}

void hasil(int total)
{
    printf("\n===========================================================================");
    printf("\nJumlah bayar\tRp.  %6.2i", total);
    printf("\nPajak 10%%\tRp.  %6.2i", total / 10);
    printf("\nTOTAL BAYAR\tRp.  %6.2i", total + total / 10);
}

int input()
{   
    char lagi;

    menu();

    do {
        printf("\nPesanan ke-%i", i + 1);
        fflush(stdin);

        printf("\nJenis [S/M/L]\t: ");
        scanf("%c", &pesanan[i].kode);
        fflush(stdin);

        printf("Jumlah beli\t: ");
        scanf("%i", &pesanan[i].banyak);
        fflush(stdin);

        printf("\nApakah Anda ingin memesan lagi? [Y/T] : ");
        lagi = getchar();
        i++;
    } while(lagi == 'Y' || lagi == 'y');
}

int hitung()
{
    int j = 0, harga, total = 0, diskon;
    char jenis[7];

    menu2();

    for(j = 0; j < i; j++){
        switch(pesanan[j].kode){
            case 'S': 
            case 's' :
                strcpy(jenis,"SMALL");
                harga = 36000;
                break;
            case 'M': 
            case 'm' :
                strcpy(jenis,"MEDIUM");
                harga = 43000;
                break;
            case 'L': 
            case 'l' :
                strcpy(jenis,"LARGE");
                harga = 62000;
                break;
        }
        diskon = pesanan[j].banyak > 10 ? 0.2 * harga * pesanan[j].banyak : 0;
        printf("\n%d\t%s\t\tRp.%.2i\t%i\t%i\tRp.%6.2i", j + 1, jenis, harga, pesanan[j].banyak, diskon, harga * pesanan[j].banyak - diskon);
        total = total + harga * pesanan[j].banyak - diskon;
    }

    return total;
}

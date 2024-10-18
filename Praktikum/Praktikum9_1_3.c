#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pilihanMenu {
    char kode;
    int banyak;
} pesanan[30];

int i;

void menu();
void input();
int hitung();
void menu2();
void hasil(int);

int main()
{
    int harga;

    system("cls");

    input();
    harga = hitung();
    hasil(harga);

    return 0;
}

void menu()
{
    printf("#------Toko GFC (Gerobak Fried Chicken)------#");
    printf("\nDAFTAR HARGA\n");
    printf("\nKode Jenis Harga Per Potong");
    printf("\n D    Dada    Rp.5000.00");
    printf("\n P    Paha    Rp.4000.00");
    printf("\n S    Sayap   Rp.3000.00");
    printf("\n\n*Harga belum termasuk pajak 10%%");
    printf("\n\nMasukkan Pesanan Anda");
}

void menu2()
{
    printf("\n\n#------Nota Belanja Anda------#\n");
    printf("\n#------Toko GFC (Gerobak Fried Chicken)------#\n");
    printf("\n===========================================================================");
    printf("\nNo\tJenis Potong\tHarga Satuan\tQty\tTotal Harga");
    printf("\n===========================================================================");
}

void hasil(int total)
{
    printf("\n===========================================================================");
    printf("\t\t\t\nTotal harga\tRp.  %6.2i", total);
    printf("\t\t\t\nPajak 10%%\tRp.  %6.2i", total / 10);
    printf("\t\t\t\nTotal bayar\tRp.  %6.2i", total + total / 10);
}

void input()
{   
    char lagi;

    menu();

    do {
        printf("\nPesanan ke-%i", i + 1);
        fflush(stdin);

        printf("\nJenis [D/P/S]\t: ");
        scanf("%c", &pesanan[i].kode);
        fflush(stdin);

        printf("banyak \t\t: ");
        scanf("%i", &pesanan[i].banyak);
        fflush(stdin);

        printf("\nApakah Anda ingin memesan lagi? [Y/T] : ");
        lagi = getchar();
        i++;
    } while(lagi == 'Y' || lagi == 'y');
}

int hitung()
{
    int j = 0, harga, total = 0;
    char jenis[6];

    menu2();

    for(j = 0; j < i; j++){
        switch(pesanan[j].kode){
            case 'D': 
            case 'd' :
                strcpy(jenis,"DADA");
                harga = 5000;
                break;
            case 'P': 
            case 'p' :
                strcpy(jenis,"PAHA");
                harga = 4000;
                break;
            case 'S': 
            case 's' :
                strcpy(jenis,"SAYAP");
                harga = 3000;
                break;
        }
        printf("\n%d\t%s\t\tRp.%.2i\t\t%i\tRp.%6.2i", j + 1, jenis, harga, pesanan[j].banyak, harga * pesanan[j].banyak);
        total = total + harga * pesanan[j].banyak;
    }

    return total;
}

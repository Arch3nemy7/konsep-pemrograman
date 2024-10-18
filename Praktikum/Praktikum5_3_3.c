#include <stdio.h>
#include <stdlib.h>

void tambah(int *, int *);

int main()
{
    int bil1, bil2, bil3, bil4;

    puts("#------Menambah nilai dua variabel dengan pass by reference------#");
    printf("Masukkan sembarang bilangan pertama : ");
    scanf("%i", &bil1);
    fflush(stdin);
    printf("Masukkan sembarang bilangan kedua : ");
    scanf("%i", &bil2);
    fflush(stdin);

    tambah(&bil1, &bil2);
    printf("Bilangan pertama dan kedua setelah ditambah 2 adalah\n%i dan %i", bil1, bil2);
    
    return 0;
}

void tambah(int *bil1, int *bil2)
{
    *bil1 = *bil1 + 2;
    *bil2 = *bil2 + 2;
}

#include <stdio.h>
#include <stdlib.h>

void menu(void);

void menu()
{
    puts("Pilihan Menu");
}

int main()
{
    int ulang;

    puts("Pengulangan kalimat \"Pilihan menu\"");
    printf("Tentukan berapa kali Anda ingin mengulang : ");
    scanf("%i", &ulang);
    
    for (int i = 1; i <= ulang; i++){
        menu();
    }
}
#include <stdio.h>
#include <stdlib.h>

void input(int *, int *, int *);
void rotasi(int *, int *, int *);

int main()
{
    int bil1, bil2, bil3;

    system("cls");
    
    input(&bil1, &bil2, &bil3);
    printf("Nilai a, b, dan c sebelum rotasi = %i, %i, %i\n", bil1, bil2, bil3);
    rotasi(&bil1, &bil2, &bil3);
    printf("Nilai a, b, dan c sesudah rotasi = %i, %i, %i", bil1, bil2, bil3);

    return 0;
}

void input(int *num1, int *num2, int *num3)
{
    printf("Masukkan bilangan pertama : ");
    scanf("%i", num1);
    fflush(stdin);
    printf("Masukkan bilangan kedua : ");
    scanf("%i", num2);
    fflush(stdin);
    printf("Masukkan bilangan ketiga : ");
    scanf("%i", num3);
    fflush(stdin);
}

void rotasi(int *a, int *b, int *c)
{
    int temp;

    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
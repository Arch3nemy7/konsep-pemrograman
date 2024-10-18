#include<stdio.h>

int main()
{
    int bilangan;
    char huruf;

    printf("Masukkan sebuah bilangan bulat : ");
    scanf("%d", &bilangan);

    fflush(stdin);

    printf("Masukkan sebuah huruf : ");
    huruf = getchar();

    printf("Bilangan yang telah dimasukkan adalah %i dan huruf yang telah dimasukkan adalah %c", bilangan, huruf);

    return 0;
}
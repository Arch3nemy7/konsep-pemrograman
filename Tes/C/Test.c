#include <stdio.h>

int main()
{
    int bilangan;

    puts("Manakah bilangan di bawah berikut yang termasuk bilangan ganjil ?");
    puts("[9 & 10]");
    printf("Jawaban : ");
    scanf("%i", &bilangan);
    
    if (bilangan == 9)
    {
        printf("Jawaban Anda benar.\n");
    } 
    else
    {
        printf("Jawaban Anda salah.\n");
    }

    return 0;
}
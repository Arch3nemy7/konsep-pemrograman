#include <stdio.h>

int main()
{
    int nilai;

    printf("Masukkan nilai : ");
    scanf("%i", &nilai);

    switch ( nilai / 10 )
    {
        case 10:
        case 9:
            printf("Luar biasa!");
            break;

        case 8:
            printf("B");
            break;
        
        default:
            printf("Nilai salah. Exiting.");
            break;
    }

    return 0;
}
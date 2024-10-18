#include <stdio.h>

int main()
{
    int sum, valid_flag;
    char letter;

    puts("Pilihlah satu huruf yang ada di bawah :");
    puts("X");
    puts("Z");
    puts("A");
    printf("Pilihan : ");
    scanf("%c", &letter);
    
    switch (letter)
    {
        case 'X':
            printf("sum = 0");
            break;
        
        case 'Z':
            printf("valid_flag = 1");
            break;
        
        case 'A':
            printf("sum = 1");
            break;
        
        default :
            printf("Unknown letter -->%c\n", letter);
    }

    return 0;
}
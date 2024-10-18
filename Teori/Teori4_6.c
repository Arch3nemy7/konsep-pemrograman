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
            sum = 0;
            printf("%i", sum);
            break;
        
        case 'Z':
            valid_flag = 1;
            printf("%i", valid_flag);
            break;
        
        case 'A':
            sum = 1;
            printf("%i", sum);
            break;
        
        default :
            printf("Unknown letter -->%c\n", letter);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int var_bulat = 32767;
    float var_pecahan1 = 339.2345678f, var_pecahan2 = 3.4567f;
    char var_karakter = 'S';

    printf("var_bulat = %i\n", var_bulat);
    printf("var_bulat = %f\n", var_pecahan1);
    printf("var_bulat = %.4e\n", var_pecahan2);
    printf("var_bulat = %c\n", var_karakter);
    
    return 0;
}
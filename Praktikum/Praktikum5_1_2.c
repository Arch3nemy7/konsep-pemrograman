#include <stdio.h>
#include<stdlib.h>

void triangular(int);

void triangular(int n)
{
    int hasil = 0;

    for (int i = n; i >= 1; i--){
        hasil = hasil + i;
    }
    
    printf("%i", hasil);
}

int main()
{
    int bil, hasil;

    puts("#------Bilangan triangular------#");
    printf("Masukkan sembarang bilangan cacah : ");
    if ((scanf("%i", &bil) == 1)  && (bil >= 0))
        bil = bil;
    else{
        printf("Masukkan sembarang bilangan CACAH!");
        exit(EXIT_FAILURE);
    }
    triangular(bil);
    
    return 0;
}
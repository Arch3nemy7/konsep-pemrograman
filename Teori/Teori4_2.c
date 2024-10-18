#include <stdio.h>

int main()
{
    int lembar, total;

    puts("Selamat datang di fotokopi \"GRAFITY Fotocopy\".");
    printf("Masukkan jumlah lembar yang ingin difotokopi : ");
    scanf("%i", &lembar);

    if (lembar < 100){
        total = lembar * 150;
        printf("Total biaya fotokopi sebanyak %i lembar : Rp%i", lembar, total);
    } else if ((lembar <= 200) && (lembar >= 100)){
        total = lembar * 100;
        printf("Total biaya fotokopi sebanyak %i lembar : Rp%i", lembar, total);
    } else if (lembar > 200){
        total = lembar * 80;
        printf("Total biaya fotokopi sebanyak %i lembar : Rp%i", lembar, total);
    } else
        printf("Masukkan banyak lembar fotokopi yang benar. Exiting");

    return 0;
}
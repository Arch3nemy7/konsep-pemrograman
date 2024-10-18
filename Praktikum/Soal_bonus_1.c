#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     float ipk;
//     int umur, kacamata, tinggi;

//     puts("Seleksi Karyawan");
//     printf("Masukkan IPK : ");
//     scanf("%f", &ipk);
//     fflush(stdin);
//     printf("Masukkan umur :");
//     scanf("%i", &umur);
//     fflush(stdin);
//     printf("Masukkan tinggi : ");
//     scanf("%i", &tinggi);
//     printf("Anda berkacamata (1/0) : ");
//     scanf("%i", &kacamata);
//     fflush(stdin);

//     if (ipk >= 3.5){
//         if (umur <= 30){
//             if (tinggi >= 175){
//                 if (kacamata != 1){
//                     puts("Selamat! Anda diterima.");
//                 } else
//                     puts("Maaf, Anda berkacamata..");
//             } else
//                 puts("Sorry, Anda kurang beruntung..");
//         } else
//             puts("Sorry, Anda terlalu tua...");
//     } else
//         puts("Sorry, belajar lagi yaa...");

//     puts("Selesai.");
//     return 0;
// }

// int main()
// {
//     int opn1, opn2, hsl;
//     char opr;

//     puts("Kalkulator sederhana");
//     printf("Masukkan opn1 opr opn2");
//     scanf("%i %c %i", &opn1, &opr, &opn2);

//     if (opr == '+')
//         hsl = opn1 + opn2;
//     if (opr == '-')
//         hsl = opn1 - opn2;
//     if (opr == '*')
//         hsl = opn1 * opn2;
//     if (opr == '/')
//         hsl = opn1 / opn2;
//     else
//         hsl = opn1 % opn2;

//     printf("%i %c %i = %i\n", opn1, opr, opn2, hsl);
    
//     return 0;
// }

// int main()
// {
//     int opn1, opn2, hsl, valid = 1;
//     char opr;

//     puts("Kalkulator sederhana");
//     printf("Masukkan opn1 opr opn2");
//     scanf("%i %c %i", &opn1, &opr, &opn2);

//     switch (opr)
//     {
//         case '+':
//             hsl = opn1 + opn2;
//         case '+':
//             hsl = opn1 - opn2;
//         case '+':
//             hsl = opn1 * opn2;
//         case '+':
//             hsl = opn1 / opn2;
//         default:
//             valid = 0;
//     }

//     if (valid == 1)
//         printf("%i %c %i = %i\n", opn1, opr, opn2, hsl);
//     else
//         puts("Operatornya salah mas...");
    
//     return 0;
// }

int main()
{
    float ipk;
    int umur, kacamata, tinggi;

    puts("Seleksi Karyawan");

    printf("Masukkan IPK Anda : ");
    if (scanf("%f", &ipk) == 1)
        ipk = ipk;
    else{
        puts("Masukkan nilai IPK yang benar!");
        exit(EXIT_FAILURE);
    }
    // fflush(stdin);
    if (ipk >= 3.5){
        printf("Masukkan umur Anda : ");
        if (scanf("%i", &umur) == 1)
            umur = umur;
        else{
            puts("Masukkan umur Anda yang benar!");
            exit(EXIT_FAILURE);
        }
        // fflush(stdin);
        if (umur <= 30){
            printf("Masukkan tinggi badan Anda : ");
            if (scanf("%i", &tinggi) == 1)
                tinggi = tinggi;
            else{
                puts("Masukkan tinggi badan Anda yang benar!");
                exit(EXIT_FAILURE);
            }
            // fflush(stdin);
            if (tinggi >= 175){
                printf("Apakah Anda berkacamata? (1 = ya, 0 = tidak) : ");
                if (scanf("%i", &kacamata) == 1)
                    kacamata = kacamata;
                else{
                    puts("Masukkan nilai yang benar!");
                    exit(EXIT_FAILURE);
                }
                // fflush(stdin);
                if (kacamata == 0){
                    puts("Selamat! Anda lolos seleksi karyawan.");
                } else if (kacamata == 1){
                    puts("Maaf, Anda tidak lolos karena Anda memakai kacamata.");
                } else 
                    puts("Masukkan nilai yang benar!");
            } else
                puts("Maaf, Anda tidak lolos karena tinggi Anda tidak memenuhi kriteria.");
        } else
            puts("Maaf, Anda tidak lolos karena umur Anda melebihi kriteria.");
    } else
        puts("Maaf, Anda tidak lolos karena ipk Anda tidak memenuhi kriteria.");

    puts("Selesai.");
    return 0;
}
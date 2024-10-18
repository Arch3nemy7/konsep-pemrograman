#include <stdio.h>
#include <stdlib.h>
#define MAKS 20

struct date {
    int month, day, year;
};
struct student {
    char name[30];
    struct date birthday;
};

int main()
{
    struct student data_mhs[MAKS];
    int i = 0, jml;
    char lagi;

    system("cls");

    do {
        printf("Name : ");
        gets(data_mhs[i].name);
        printf("Birthday (mm-dd-yyyy) : ");
        scanf("%i-%i-%i", &data_mhs[i].birthday.month, &data_mhs[i].birthday.day, &data_mhs[i].birthday.year);
        i++;
        fflush(stdin);
        printf("\nMau memasukkan data lagi [Y/T] ? ");
        lagi = getchar();
        fflush(stdin);
    } while (lagi == 'Y' || lagi == 'y');

    jml = i;
    printf("\nDATA MAHASISWA\n");
    for (i = 0; i < jml; i++) {
        printf("%i. Name : %s", i + 1, data_mhs[i].name);
        printf("\n Birthday : %i-%i-%i\n\n",
        data_mhs[i].birthday.month,
        data_mhs[i].birthday.day,
        data_mhs[i].birthday.year);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

void cetakTanggal(int, int, int);

int main()
{
    struct date {
        int month, day, year;
    } today;

    printf("Enter the current date (mm-dd-yyyy) : ");
    scanf("%i-%i-%i", &today.month, &today.day, &today.year);

    cetakTanggal(today.month, today.day, today.year);

    return 0;
}

void cetakTanggal(int mm, int dd, int yy)
{
    char *nama_bulan[] = {
        "Wrong month", "January", "February", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    printf("Todays date is %s %i, %i\n\n", nama_bulan[mm], dd, yy);
}

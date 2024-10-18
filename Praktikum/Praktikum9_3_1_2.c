#include <stdio.h>
#include <stdlib.h>

struct date {
    int month, day, year;
};

void cetakTanggal(struct date);

int main()
{
    struct date today;

    printf("Enter the current date (mm-dd-yyyy) : ");
    scanf("%i-%i-%i", &today.month, &today.day, &today.year);

    cetakTanggal(today);

    return 0;
}

void cetakTanggal(struct date now)
{
    char *nama_bulan[] = {
        "Wrong month", "January", "February", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    printf("Todays date is %s %i, %i\n\n", nama_bulan[now.month], now.day, now.year);
}

#include <stdio.h>
#include <stdlib.h>

struct date {
    int month, day, year;
} today = {12, 25, 2006};

struct date today;

struct tanggal {
    int m, d, y;
};

struct student {
    char name[30];
    struct tanggal birthday;
} data_mhs[20];

struct student mhs = {"Muhammad", 2, 28, 1970};

struct student data_mhs[20];


int main()
{
    int tgl;

    today.day = 12;
    today.month = 10;
    today.year = 2020;

    mhs.birthday.d = 12;
    mhs.birthday.m = 1;
    mhs.birthday.y = 2000;

    tgl = mhs.birthday.d;

    printf("%i/%i/%i", today.day, today.month, today.year);
    printf("%i-%i-%i", mhs.birthday.d, mhs.birthday.m, mhs.birthday.y);

    return 0;
}
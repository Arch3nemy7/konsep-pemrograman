#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char day[20];

    printf("What day is it : ");
    scanf("%s", &day);

    toupper(day);

    if (strcmp(day, "WEDNESDAY") == 0)
        printf("It is wednesday my dudes");
    else
        printf("Have a great day!");

    return 0;
}
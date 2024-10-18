#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;

    puts("#------Output huruf dari bilangan ASCII 65-90-----#");
    for (kar = 65; kar <= 90; kar++)
        printf("%c\n", kar);

    return 0;
}
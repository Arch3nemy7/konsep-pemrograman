#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;

    puts("#------Output huruf dari bilangan ASCII 90-65-----#");
    for (kar = 90; kar >= 65; kar--)
        printf("%c\n", kar);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int array[3][3] = {
    //     {1, 2, 3}, 
    //     {4, 5, 6}, 
    //     {7, 8, 9}
    // };
    int bilangan[2][2] = {
        {1, 2}, 
        {3, 4}
    };
    // int bilangan2[][2] = {
    //     {1, 2},
    //     {3, 4},
    //     {5, 6}
    // };

    // printf("%i\n", array[0][7]);
    // printf("%i\n", array[2][1]);

    printf("%i\n", bilangan[0][0]);
    printf("%i\n", bilangan[0][1]);
    printf("%i\n", bilangan[0][3]);
    printf("%i\n", bilangan[3][2]);

    // printf("%i\n", bilangan2[0][0]);
    // printf("%i\n", bilangan2[0][1]);
    // printf("%i\n", bilangan2[1][0]);
    // printf("%i\n", bilangan2[1][1]);
    // printf("%i\n", bilangan2[2][0]);
    // printf("%i\n", bilangan2[2][1]);

    return 0;
}

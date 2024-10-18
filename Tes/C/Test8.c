#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char username[20], password[20];

    printf("USERNAME : ");
    scanf("%s", &username);
    printf("PASSWORD : ");
    scanf("%s", &password);

    if (strcmp(username, "ingfo") == 0){
        if (strcmp(password, "ingfokan") == 0){
            printf("LESS GOO!");
        } else {
            printf("Password-nya salah cok");
        }
    } else
    {
        printf("Yang daftar-daftar ajah");
    }
        
    return 0;
}
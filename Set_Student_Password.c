#include <stdio.h>

struct password
{
    int id;
    char password[20];
} pass;

int main()
{
    printf("Enter Student ID: ");
    int id;
    scanf("%d", &id);

    int found = 0;

    FILE *openfile;
    openfile = fopen("Student Password.txt", "a+");
    openfile = fopen("Student Password.txt", "r+");

    while (fread(&pass, sizeof(pass), 1, openfile) == 1)
    {
        if (id == pass.id)
        {
            fflush(stdin);
            printf("Password: ");
            scanf("%s", &pass.password);

            fseek(openfile, -sizeof(pass), SEEK_CUR);
            fwrite(&pass, sizeof(pass), 1, openfile);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        openfile = fopen("Student Password.txt", "a+");

        pass.id = id;
        fflush(stdin);
        printf("Password: ");
        scanf("%s", &pass.password);

        fwrite(&pass, sizeof(pass), 1, openfile);
    }

    fclose(openfile);

    printf("\n\nPassword Set Successfully\n");

    return 0;
}

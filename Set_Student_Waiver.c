#include <stdio.h>

struct student_waiver
{
    int id;
    float waiver;
    float required_sgpa;
} waiver;

int main()
{
    printf("Enter Student ID: ");
    int id;
    scanf("%d", &id);

    int found = 0;

    FILE *openfile;
    openfile = fopen("Student Waiver.txt", "a+");
    openfile = fopen("Student Waiver.txt", "r+");

    while (fread(&waiver, sizeof(waiver), 1, openfile) == 1)
    {
        if (id == waiver.id)
        {
            fflush(stdin);
            printf("Waiver: ");
            scanf("%f", &waiver.waiver);
            printf("Required SGPA: ");
            scanf("%f", &waiver.required_sgpa);

            fseek(openfile, -sizeof(waiver), SEEK_CUR);
            fwrite(&waiver, sizeof(waiver), 1, openfile);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        openfile = fopen("Student Waiver.txt", "a+");

        waiver.id = id;
        fflush(stdin);
        printf("Waiver: ");
        scanf("%f", &waiver.waiver);
        printf("Required SGPA: ");
        scanf("%f", &waiver.required_sgpa);

        fwrite(&waiver, sizeof(waiver), 1, openfile);
    }

    fclose(openfile);

    printf("\n\nWaiver Set Successfully\n");

    return 0;
}

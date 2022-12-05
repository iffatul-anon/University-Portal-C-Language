#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void faculty_login();
void faculty_dasboard(int id);
void faculty_profile(int id);
void faculty_profile_update(int id);
void faculty_profile_update(int id);
void faculty_course(int id);
void faculty_course_dasboard(char tlp, char subject[100]);
void faculty_mark_entry(int id, char tlp, char subject[100]);
void faculty_result_list(char tlp, char subject[100]);

void student_login();
void student_dasboard(int id);
void student_profile(int id);
void student_profile_update(int id);
void student_password_change(int id);
void student_result(int id);
void student_payment_ledger(int id);

void mark_entry_theory();
void mark_entry_lab();
void mark_entry_project();
float grade(float total);

struct profile
{
    int id;
    char name[50];
    char date_of_birth[15];
    char father_name[50];
    char mother_name[50];
    char designation[50];
    char department[100];
    char email[30];
    char phone[15];
    char address[50];
    char blood_group[5];
    char religion[20];
} faculty, student;

struct password
{
    int id;
    char password[20];
} pass;

struct student_waiver
{
    int id;
    float given_waiver;
    float required_sgpa;
} waiver;

struct mark_entry
{
    int id;
    char subject[100];
    float average_quiz, quiz1, quiz2, quiz3;
    float assignment;
    float presentation;
    float attendance;
    float midterm;
    float final;
    float total;
    float grade_point;
    float lab_performance;
    float lab_report;
    float proposal;
} mark;

struct student_result
{
    int id;
    float sgpa;
} result;

float grade(float total)
{
    float grade_point;

    if (total >= 80)
    {
        grade_point = 4.00;
    }
    else if (total >= 75)
    {
        grade_point = 3.75;
    }
    else if (total >= 70)
    {
        grade_point = 3.50;
    }
    else if (total >= 65)
    {
        grade_point = 3.25;
    }
    else if (total >= 60)
    {
        grade_point = 3.00;
    }
    else if (total >= 55)
    {
        grade_point = 2.75;
    }
    else if (total >= 50)
    {
        grade_point = 2.50;
    }
    else if (total >= 45)
    {
        grade_point = 2.25;
    }
    else if (total >= 40)
    {
        grade_point = 2.00;
    }
    else
    {
        grade_point = 0.00;
    }

    return grade_point;
}

void mark_entry_theory()
{
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter 1no quiz mark (0-15) =");
        scanf("%f", &mark.quiz1);
        if (mark.quiz1 < 0 || mark.quiz1 > 15)
        {
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter 2no quiz mark (0-15) =");
        scanf("%f", &mark.quiz2);
        if (mark.quiz2 < 0 || mark.quiz2 > 15)
        {
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter 3no quiz mark (0-15) =");
        scanf("%f", &mark.quiz3);
        if (mark.quiz3 < 0 || mark.quiz3 > 15)
        {
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter presentation mark (0-8) =");
        scanf("%f", &mark.presentation);
        if (mark.presentation < 0 || mark.presentation > 8)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter assignment mark (0-5) =");
        scanf("%f", &mark.assignment);
        if (mark.assignment < 0 || mark.assignment > 5)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter mid mark (0-25) =");
        scanf("%f", &mark.midterm);
        if (mark.midterm < 0 || mark.midterm > 25)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter final mark (0-40) =");
        scanf("%f", &mark.final);
        if (mark.final < 0 || mark.final > 40)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter attendance mark (0-7) =");
        scanf("%f", &mark.attendance);
        if (mark.attendance < 0 || mark.attendance > 7)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    mark.average_quiz = (mark.quiz1 + mark.quiz2 + mark.quiz3) / 3.0;
    mark.total = mark.average_quiz + mark.presentation + mark.assignment + mark.midterm + mark.final + mark.attendance;
    mark.grade_point = grade(mark.total);

    return;
}

void mark_entry_lab()
{
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter lab performance mark (0-20) =");
        scanf("%f", &mark.lab_performance);
        if (mark.lab_performance < 0 || mark.lab_performance > 20)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter assignment mark (0-5) =");
        scanf("%f", &mark.assignment);
        if (mark.assignment < 0 || mark.assignment > 5)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter lab report mark (0-25) =");
        scanf("%f", &mark.lab_report);
        if (mark.lab_report < 0 || mark.lab_report > 25)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter final mark (0-40) =");
        scanf("%f", &mark.final);
        if (mark.final < 0 || mark.final > 40)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter attendance mark (0-10) =");
        scanf("%f", &mark.attendance);
        if (mark.attendance < 0 || mark.attendance > 10)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    mark.total = mark.lab_performance + mark.assignment + mark.lab_report + mark.final + mark.attendance;
    mark.grade_point = grade(mark.total);

    return;
}

void mark_entry_project()
{
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter proposal mark (0-20) =");
        scanf("%f", &mark.proposal);
        if (mark.proposal < 0 || mark.proposal > 20)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter presentation mark (0-20) =");
        scanf("%f", &mark.presentation);
        if (mark.presentation < 0 || mark.presentation > 20)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter final mark (0-40) =");
        scanf("%f", &mark.final);
        if (mark.final < 0 || mark.final > 40)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for (int i = 1; i <= 1; i++)
    {
        printf("Enter attendance mark (0-10) =");
        scanf("%f", &mark.attendance);
        if (mark.attendance < 0 || mark.attendance > 10)
        {
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    mark.total = mark.proposal + mark.presentation + mark.final + mark.attendance;
    mark.grade_point = grade(mark.total);

    return;
}

void faculty_result_list(char tlp, char subject[100])
{
    system("clear");

    printf("\n\n|| Faculty Portal ||\n\n");
    printf("|| Result List (%s) ||\n\n\n", subject);

    char file_name[100];
    strcpy(file_name, subject);
    strcat(file_name, ".txt");

    FILE *openfile;
    openfile = fopen(file_name, "a");
    openfile = fopen(file_name, "r");

    if (tlp == 't')
    {
        printf("ID:  Quiz1 | Quiz2 | Quiz3 | Quiz Average | Assignment | Presentation | Midterm | Final | Attendance | Total | Grade Point\n\n");

        while (fread(&mark, sizeof(mark), 1, openfile) == 1)
        {
            printf("%d:  %.2f | %.2f | %.2f | %.2f         | %.2f       | %.2f         | %.2f   | %.2f | %.2f       | %.2f | %.2f\n\n",
                   mark.id, mark.quiz1, mark.quiz2, mark.quiz3, mark.average_quiz, mark.assignment, mark.presentation, mark.midterm, mark.final, mark.attendance, mark.total, mark.grade_point);
        }
    }
    else if (tlp == 'l')
    {
        printf("ID:  Lab Performance | Assignment | Lab Report | Final | Attendance | Total | Grade Point\n\n");

        while (fread(&mark, sizeof(mark), 1, openfile) == 1)
        {
            printf("%d:  %.2f           | %.2f        | %.2f      | %.2f | %.2f       | %.2f | %.2f\n\n",
                   mark.id, mark.lab_performance, mark.assignment, mark.lab_report, mark.final, mark.attendance, mark.total, mark.grade_point);
        }
    }
    else if (tlp == 'p')
    {
        printf("ID:  Proposal | Presentation | Final | Attendance | Total | Grade Point\n\n");

        while (fread(&mark, sizeof(mark), 1, openfile) == 1)
        {
            printf("%d:  %.2f    | %.2f        | %.2f | %.2f       | %.2f | %.2f\n\n",
                   mark.id, mark.proposal, mark.presentation, mark.final, mark.attendance, mark.total, mark.grade_point);
        }
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void faculty_mark_entry(int id, char tlp, char subject[100])
{
    system("clear");

    int found = 0;
    char file_name[100];
    strcpy(file_name, subject);
    strcat(file_name, ".txt");

    FILE *openfile;
    openfile = fopen(file_name, "a");
    openfile = fopen(file_name, "r+");

    while (fread(&mark, sizeof(mark), 1, openfile) == 1)
    {
        if (id == mark.id)
        {
            if (tlp == 't')
            {
                mark_entry_theory();
            }
            else if (tlp == 'l')
            {
                mark_entry_lab();
            }
            else if (tlp == 'p')
            {
                mark_entry_project();
            }
            fseek(openfile, -sizeof(mark), SEEK_CUR);
            fwrite(&mark, sizeof(mark), 1, openfile);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        openfile = fopen(file_name, "a+");
        mark.id = id;
        if (tlp == 't')
        {
            mark_entry_theory();
        }
        else if (tlp == 'l')
        {
            mark_entry_lab();
        }
        else if (tlp == 'p')
        {
            mark_entry_project();
        }
        fwrite(&mark, sizeof(mark), 1, openfile);
    }

    fclose(openfile);

    printf("\n\nMark entry complete\n");

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void faculty_course_dasboard(char tlp, char subject[100])
{
    while (1)
    {
        system("clear");

        printf("\n\n|| Faculty Portal ||\n\n");
        printf("|| Course (%s) ||\n\n\n", subject);
        printf("1. Mark Entry\n");
        printf("2. Result List\n");
        printf("3. Back\n\n");
        printf("Select a option: ");

        int option;
        scanf("%d", &option);
        if (option == 1)
        {
            system("clear");
            printf("\n\n|| Faculty Portal ||\n\n");
            printf("|| Mark Entry (%s) ||\n\n\n", subject);

            int id;
            printf("Enter ID: ");
            scanf("%d", &id);
            int found = 0;

            FILE *openfile;
            openfile = fopen("Student Password.txt", "r");

            while (fread(&pass, sizeof(pass), 1, openfile) == 1)
            {
                if (id == pass.id)
                {
                    found = 1;
                    break;
                }
            }

            fclose(openfile);

            if (found == 1)
            {
                faculty_mark_entry(id, tlp, subject);
            }
            else
            {
                printf("\n\nStudent is not registered\n");
                system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
            }
            continue;
        }
        if (option == 2)
        {
            faculty_result_list(tlp, subject);
            continue;
        }
        if (option == 3)
        {
            return;
        }
    }
}

void faculty_course(int id)
{
    if (id == 1001)
    {
        while (1)
        {
            system("clear");

            printf("\n\n|| Faculty Portal ||\n\n");
            printf("|| Course ||\n\n\n");
            printf("1. Data Structure\n");
            printf("2. Data Structure Lab\n");
            printf("3. Back\n\n");
            printf("Select a option: ");

            int option;
            scanf("%d", &option);
            if (option == 1)
            {
                char tlp = 't';
                char subject[] = "Data Structure";
                faculty_course_dasboard(tlp, subject);
                continue;
            }
            if (option == 2)
            {
                char tlp = 'l';
                char subject[] = "Data Structure Lab";
                faculty_course_dasboard(tlp, subject);
                continue;
            }
            if (option == 3)
            {
                return;
            }
        }
    }
    if (id == 1002)
    {
        while (1)
        {
            system("clear");

            printf("\n\n|| Faculty Portal ||\n\n");
            printf("|| Course ||\n\n\n");
            printf("1. Software Development Capstone Project\n");
            printf("2. Back\n\n");
            printf("Select a option: ");

            int option;
            scanf("%d", &option);
            if (option == 1)
            {
                char tlp = 'p';
                char subject[] = "Software Development Capstone Project";
                faculty_course_dasboard(tlp, subject);
                continue;
            }
            if (option == 2)
            {
                return;
            }
        }
    }
}

void student_payment_ledger(int id)
{
    system("clear");

    printf("\n\n|| Student Portal ||\n\n");
    printf("|| Payment Ledger ||\n\n\n");
    printf("ID: %d\n\n", id);

    float registration_fee = 25000;
    float tution_fee = 65000;
    float total_fee = registration_fee + tution_fee;
    float given_waiver;
    float required_sgpa, sgpa;

    FILE *openfile1, *openfile2;
    openfile1 = fopen("Student Result.txt", "a");
    openfile1 = fopen("Student Result.txt", "r");

    while (fread(&result, sizeof(result), 1, openfile1) == 1)
    {
        if (id == result.id)
        {
            sgpa = result.sgpa;
            printf("SGPA: %.2f\n\n\n", sgpa);
        }
    }

    fclose(openfile1);

    openfile2 = fopen("Student Waiver.txt", "a");
    openfile2 = fopen("Student Waiver.txt", "r");

    while (fread(&waiver, sizeof(waiver), 1, openfile2) == 1)
    {
        if (id == waiver.id)
        {
            given_waiver = waiver.given_waiver;
            required_sgpa = waiver.required_sgpa;
        }
    }

    fclose(openfile2);

    printf("Registration & Tution Fee: %.2fTk\n\n", total_fee);
    if (sgpa < required_sgpa)
    {
        printf("Waiver: 00Tk\n\n");
        printf("Payable: %.2fTk\n\n", total_fee);
    }
    else
    {
        given_waiver = tution_fee * given_waiver;
        total_fee = total_fee - given_waiver;
        printf("Waiver: %.2fTk\n\n", given_waiver);
        printf("Payable: %.2fTk\n\n", total_fee);
    }

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void student_result(int id)
{
    system("clear");

    printf("\n\n|| Student Portal ||\n\n");
    printf("|| Result ||\n\n\n");
    printf("ID: %d\n\n", id);

    float sum_grade_point = 0.0;
    float sgpa;

    FILE *openfile;
    openfile = fopen("Data Structure.txt", "a");
    openfile = fopen("Data Structure.txt", "r");

    printf("Subject: Data Structure\n\n");
    printf("Quiz1 | Quiz2 | Quiz3 | Quiz Average | Assignment | Presentation | Midterm | Final | Attendance | Total | Grade Point\n\n");

    while (fread(&mark, sizeof(mark), 1, openfile) == 1)
    {
        if (id == mark.id)
        {
            printf("%.2f | %.2f | %.2f | %.2f        | %.2f       | %.2f         | %.2f   | %.2f | %.2f       | %.2f | %.2f\n\n\n",
                   mark.quiz1, mark.quiz2, mark.quiz3, mark.average_quiz, mark.assignment, mark.presentation, mark.midterm, mark.final, mark.attendance, mark.total, mark.grade_point);

            sum_grade_point = sum_grade_point + (mark.grade_point * 3);
        }
    }

    fclose(openfile);

    openfile = fopen("Data Structure Lab.txt", "a");
    openfile = fopen("Data Structure Lab.txt", "r");

    printf("Subject: Data Structure Lab\n\n");
    printf("Lab Performance | Assignment | Lab Report | Final | Attendance | Total | Grade Point\n\n");

    while (fread(&mark, sizeof(mark), 1, openfile) == 1)
    {
        if (id == mark.id)
        {
            printf("%.2f           | %.2f        | %.2f      | %.2f | %.2f       | %.2f | %.2f\n\n\n",
                   mark.lab_performance, mark.assignment, mark.lab_report, mark.final, mark.attendance, mark.total, mark.grade_point);

            sum_grade_point = sum_grade_point + (mark.grade_point * 1);
        }
    }

    fclose(openfile);

    openfile = fopen("Software Development Capstone Project.txt", "a");
    openfile = fopen("Software Development Capstone Project.txt", "r");

    printf("Subject: Software Development Capstone Project\n\n");
    printf("Proposal | Presentation | Final | Attendance | Total | Grade Point\n\n");

    while (fread(&mark, sizeof(mark), 1, openfile) == 1)
    {
        if (id == mark.id)
        {
            printf("%.2f    | %.2f        | %.2f | %.2f       | %.2f | %.2f\n\n\n",
                   mark.proposal, mark.presentation, mark.final, mark.attendance, mark.total, mark.grade_point);

            sum_grade_point = sum_grade_point + (mark.grade_point * 3);
        }
    }

    fclose(openfile);

    sgpa = sum_grade_point / 7.0;
    printf("SGPA: %.2f\n", sgpa);

    int found = 0;

    openfile = fopen("Student Result.txt", "a");
    openfile = fopen("Student Result.txt", "r+");

    while (fread(&result, sizeof(result), 1, openfile) == 1)
    {
        if (id == result.id)
        {
            result.sgpa = sgpa;

            fseek(openfile, -sizeof(result), SEEK_CUR);
            fwrite(&result, sizeof(result), 1, openfile);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        openfile = fopen("Student Result.txt", "a+");

        result.id = id;
        result.sgpa = sgpa;

        fwrite(&result, sizeof(result), 1, openfile);
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void faculty_password_change(int id)
{
    system("clear");

    printf("\n\n|| Faculty Portal ||\n\n");
    printf("|| Password Change ||\n\n\n");

    FILE *openfile;
    openfile = fopen("Faculty Password.txt", "a");
    openfile = fopen("Faculty Password.txt", "r+");

    while (fread(&pass, sizeof(pass), 1, openfile) == 1)
    {
        if (id == pass.id)
        {
            char password[20];

            fflush(stdin);
            printf("Enter Password: ");
            scanf("%s", &password);
            if (strcmp(password, pass.password) == 0)
            {
                printf("ID: %d\n", pass.id);
                fflush(stdin);
                printf("Enter New Password: ");
                gets(pass.password);

                fseek(openfile, -sizeof(pass), SEEK_CUR);
                fwrite(&pass, sizeof(pass), 1, openfile);

                printf("\n\nPassword Changed Successfully\n");
                break;
            }
            else
            {
                printf("\n\nIncorrect Password\n");
                break;
            }
        }
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void student_password_change(int id)
{
    system("clear");

    printf("\n\n|| Student Portal ||\n\n");
    printf("|| Password Change ||\n\n\n");

    FILE *openfile;
    openfile = fopen("Student Password.txt", "a");
    openfile = fopen("Student Password.txt", "r+");

    while (fread(&pass, sizeof(pass), 1, openfile) == 1)
    {
        if (id == pass.id)
        {
            char password[20];

            fflush(stdin);
            printf("Enter Password: ");
            scanf("%s", &password);
            if (strcmp(password, pass.password) == 0)
            {
                printf("ID: %d\n", pass.id);
                fflush(stdin);
                printf("Enter New Password: ");
                gets(pass.password);

                fseek(openfile, -sizeof(pass), SEEK_CUR);
                fwrite(&pass, sizeof(pass), 1, openfile);

                printf("\n\nPassword Changed Successfully\n");
                break;
            }
            else
            {
                printf("\n\nIncorrect Password\n");
                break;
            }
        }
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void faculty_profile_update(int id)
{
    system("clear");

    printf("\n\n|| Faculty Portal ||\n\n");
    printf("|| Profile Update ||\n\n\n");

    int found = 0;

    FILE *openfile;
    openfile = fopen("Faculty Record.txt", "r+");

    while (fread(&faculty, sizeof(faculty), 1, openfile) == 1)
    {
        if (id == faculty.id)
        {
            printf("ID: %d\n", faculty.id);
            fflush(stdin);
            printf("Name: ");
            gets(faculty.name);
            printf("Date of Birth: ");
            gets(faculty.date_of_birth);
            printf("Designation: ");
            gets(faculty.designation);
            printf("Department: ");
            gets(faculty.department);
            printf("E-mail: ");
            gets(faculty.email);
            printf("Contact Number: ");
            gets(faculty.phone);
            printf("Address: ");
            gets(faculty.address);
            printf("Blood Group: ");
            gets(faculty.blood_group);
            printf("Religion: ");
            gets(faculty.religion);

            fseek(openfile, -sizeof(faculty), SEEK_CUR);
            fwrite(&faculty, sizeof(faculty), 1, openfile);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        openfile = fopen("Faculty Record.txt", "a+");

        faculty.id = id;
        printf("ID: %d\n", faculty.id);
        fflush(stdin);
        printf("Name: ");
        gets(faculty.name);
        printf("Date of Birth: ");
        gets(faculty.date_of_birth);
        printf("Designation: ");
        gets(faculty.designation);
        printf("Department: ");
        gets(faculty.department);
        printf("E-mail: ");
        gets(faculty.email);
        printf("Contact Number: ");
        gets(faculty.phone);
        printf("Address: ");
        gets(faculty.address);
        printf("Blood Group: ");
        gets(faculty.blood_group);
        printf("Religion: ");
        gets(faculty.religion);

        fwrite(&faculty, sizeof(faculty), 1, openfile);
    }

    fclose(openfile);

    printf("\n\nProfile Updated Successfully");

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void student_profile_update(int id)
{
    system("clear");

    printf("\n\n|| Student Portal ||\n\n");
    printf("|| Profile Update ||\n\n\n");

    int found = 0;

    FILE *openfile;
    openfile = fopen("Student Record.txt", "r+");

    while (fread(&student, sizeof(student), 1, openfile) == 1)
    {
        if (id == student.id)
        {
            printf("ID: %d\n", student.id);
            fflush(stdin);
            printf("Name: ");
            gets(student.name);
            printf("Date of Birth: ");
            gets(student.date_of_birth);
            printf("Father's Name: ");
            gets(student.father_name);
            printf("Mother's Name: ");
            gets(student.mother_name);
            printf("Department: ");
            gets(student.department);
            printf("E-mail: ");
            gets(student.email);
            printf("Contact Number: ");
            gets(student.phone);
            printf("Address: ");
            gets(student.address);
            printf("Blood Group: ");
            gets(student.blood_group);
            printf("Religion: ");
            gets(student.religion);

            fseek(openfile, -sizeof(student), SEEK_CUR);
            fwrite(&student, sizeof(student), 1, openfile);

            found = 1;
            break;
        }
    }
    if (!found)
    {
        openfile = fopen("Student Record.txt", "a+");

        student.id = id;
        printf("ID: %d\n", student.id);
        fflush(stdin);
        printf("Name: ");
        gets(student.name);
        printf("Date of Birth: ");
        gets(student.date_of_birth);
        printf("Father's Name: ");
        gets(student.father_name);
        printf("Mother's Name: ");
        gets(student.mother_name);
        printf("Department: ");
        gets(student.department);
        printf("E-mail: ");
        gets(student.email);
        printf("Contact Number: ");
        gets(student.phone);
        printf("Address: ");
        gets(student.address);
        printf("Blood Group: ");
        gets(student.blood_group);
        printf("Religion: ");
        gets(student.religion);

        fwrite(&student, sizeof(student), 1, openfile);
    }

    fclose(openfile);

    printf("\n\nProfile Updated Successfully");

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void faculty_profile(int id)
{
    system("clear");

    printf("\n\n|| Faculty Portal ||\n\n");
    printf("|| Profile ||\n\n\n");

    int found = 0;

    FILE *openfile;
    openfile = fopen("Faculty Record.txt", "a");
    openfile = fopen("Faculty Record.txt", "r");

    while (fread(&faculty, sizeof(faculty), 1, openfile) == 1)
    {
        if (id == faculty.id)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("ID: %d\n", faculty.id);
        printf("Name: %s\n", faculty.name);
        printf("Date of Birth: %s\n", faculty.date_of_birth);
        printf("Designation: %s\n", faculty.designation);
        printf("Department: %s\n", faculty.department);
        printf("E-mail: %s\n", faculty.email);
        printf("Contact Number: %s\n", faculty.phone);
        printf("Address: %s\n", faculty.address);
        printf("Blood Group: %s\n", faculty.blood_group);
        printf("Religion: %s\n", faculty.religion);
    }
    else
    {
        printf("Please update your profile\n");
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void student_profile(int id)
{
    system("clear");

    printf("\n\n|| Student Portal ||\n\n");
    printf("|| Profile ||\n\n\n");

    int found = 0;

    FILE *openfile;
    openfile = fopen("Student Record.txt", "a");
    openfile = fopen("Student Record.txt", "r");

    while (fread(&student, sizeof(student), 1, openfile) == 1)
    {
        if (id == student.id)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("ID: %d\n", student.id);
        printf("Name: %s\n", student.name);
        printf("Date of Birth: %s\n", student.date_of_birth);
        printf("Father's Name: %s\n", student.father_name);
        printf("Mother's Name: %s\n", student.mother_name);
        printf("Department: %s\n", student.department);
        printf("E-mail: %s\n", student.email);
        printf("Contact Number: %s\n", student.phone);
        printf("Address: %s\n", student.address);
        printf("Blood Group: %s\n", student.blood_group);
        printf("Religion: %s\n", student.religion);
    }
    else
    {
        printf("Please update your profile\n");
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void faculty_dasboard(int id)
{
    while (1)
    {
        system("clear");

        printf("\n\n|| Faculty Portal ||\n\n\n");
        printf("ID : %d\n\n", id);
        printf("1. Profile\n");
        printf("2. Profile Update\n");
        printf("3. Password Change\n");
        printf("4. Courses\n");
        printf("5. Logout\n\n");
        printf("Select a option: ");

        int option;
        scanf("%d", &option);
        if (option == 1)
        {
            faculty_profile(id);
            continue;
        }
        if (option == 2)
        {
            faculty_profile_update(id);
            continue;
        }
        if (option == 3)
        {
            faculty_password_change(id);
            continue;
        }
        if (option == 4)
        {
            faculty_course(id);
            continue;
        }
        if (option == 5)
        {
            return;
        }
    }
}

void student_dasboard(int id)
{
    while (1)
    {
        system("clear");

        printf("\n\n|| Student Portal ||\n\n\n");
        printf("ID : %d\n\n", id);
        printf("1. Profile\n");
        printf("2. Profile Update\n");
        printf("3. Password Change\n");
        printf("4. Result\n");
        printf("5. Payment Ladger\n");
        printf("6. Logout\n\n");
        printf("Select a option: ");

        int option;
        scanf("%d", &option);
        if (option == 1)
        {
            student_profile(id);
            continue;
        }
        if (option == 2)
        {
            student_profile_update(id);
            continue;
        }
        if (option == 3)
        {
            student_password_change(id);
            continue;
        }
        if (option == 4)
        {
            student_result(id);
            continue;
        }
        if (option == 5)
        {
            student_payment_ledger(id);
            continue;
        }
        if (option == 6)
        {
            return;
        }
    }
}

void faculty_login()
{
    system("clear");

    int id;
    char password[20];

    printf("\n\n|| Faculty Login ||\n\n\n");
    printf("Enter Your ID: ");
    scanf("%d", &id);

    fflush(stdin);
    printf("Enter Your Password: ");
    scanf("%s", &password);

    int found = 0;

    FILE *openfile;
    openfile = fopen("Faculty Password.txt", "a");
    openfile = fopen("Faculty Password.txt", "r");

    while (fread(&pass, sizeof(pass), 1, openfile) == 1)
    {
        if (id == pass.id)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        if (strcmp(password, pass.password) == 0)
        {
            faculty_dasboard(id);
            return;
        }
        else
        {
            printf("\n\nIncorrect Password\n");
        }
    }
    else
    {
        printf("\n\nIncorrect ID\n");
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

void student_login()
{

    system("clear");

    int id;
    char password[20];

    printf("\n\n|| Student Login ||\n\n\n");
    printf("Enter Your ID: ");
    scanf("%d", &id);

    fflush(stdin);
    printf("Enter Your Password: ");
    scanf("%s", &password);

    int found = 0;

    FILE *openfile;
    openfile = fopen("Student Password.txt", "a");
    openfile = fopen("Student Password.txt", "r");

    while (fread(&pass, sizeof(pass), 1, openfile) == 1)
    {
        if (id == pass.id)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        if (strcmp(password, pass.password) == 0)
        {
            student_dasboard(id);
            return;
        }
        else
        {
            printf("\n\nIncorrect Password\n");
        }
    }
    else
    {
        printf("\n\nIncorrect ID\n");
    }

    fclose(openfile);

    system("read -n 1 -s -p \"\n\nPress any key to continue...\"");
    return;
}

int main()
{
    while (1)
    {
        system("clear");

        printf("\n\n|| Welcome to DIU Portal ||\n\n\n");
        printf("   1. Faculty Login\n");
        printf("   2. Student Login\n");
        printf("   3. Exit\n\n");
        printf("   Select a option : ");

        int option;
        scanf("%d", &option);
        if (option == 1)
        {
            faculty_login();
            continue;
        }
        if (option == 2)
        {
            student_login();
            continue;
        }
        if (option == 3)
        {
            system("clear");
            printf("\n\nThank You\n\n\n");
            return 0;
        }
    }
}

/*

Md. Iffatul Islam Anon
ID: 221-35-1065
Email: anon35-1065@diu.edu.bd

*/

/*
used functions:

strcpy();
strcmp();
strcat();

fflush();

system("clear");
system("read");

fopen();
fclose();
fwrite();
fread();
fseek();

*/

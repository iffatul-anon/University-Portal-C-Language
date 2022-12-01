#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct profile{
    int id;
    char name[50];
    char father_name[50];
    char mother_name[50];
    char designation[50];
    char department[100];
    char email[30];
    char phone[15];
    char address[50];
    char blood_group[5];
    char religion[20];
} faculty,student;

struct password{
    int id;
    char password[20];
} pass;

struct student_waiver{
    int id;
    float waiver;
    float required_sgpa;
} waiver;

struct mark_entry{
    int id;
    char subject[100];
    float average_quiz,quiz1,quiz2,quiz3;
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
} theory,lab,project;

float grade(float total){
    float grade_point;

    if(total>=80){
        grade_point=4.00;
    }
    else if(total>=75){
        grade_point=3.75;
    }
    else if(total>=70){
        grade_point=3.50;
    }
    else if(total>=65){
        grade_point=3.25;
    }
    else if(total>=60){
        grade_point=3.00;
    }
    else if(total>=55){
        grade_point=2.75;
    }
    else if(total>=50){
        grade_point=2.50;
    }
    else if(total>=45){
        grade_point=2.25;
    }
    else if(total>=40){
        grade_point=2.00;
    }
    else{
        grade_point=0.00;
    }
    return grade_point;
}

void faculty_mark_entry_theory(){
    for(int i=1;i<=1;i++){
        printf("Enter 1no quiz mark (0-15) =");
        scanf("%f",&theory.quiz1);
        if(theory.quiz1<0 || theory.quiz1>15){
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter 2no quiz mark (0-15) =");
        scanf("%f",&theory.quiz2);
        if(theory.quiz2<0 || theory.quiz2>15){
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter 3no quiz mark (0-15) =");
        scanf("%f",&theory.quiz3);
        if(theory.quiz3<0 || theory.quiz3>15){
            printf("Invalid Input. Try Again\n");
            i--;
            continue;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter presentation mark (0-8) =");
        scanf("%f",&theory.presentation);
        if(theory.presentation<0 || theory.presentation>8){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter assignment mark (0-5) =");
        scanf("%f",&theory.assignment);
        if(theory.assignment<0 || theory.assignment>5){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter mid mark (0-25) =");
        scanf("%f",&theory.midterm);
        if(theory.midterm<0 || theory.midterm>25){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter final mark (0-40) =");
        scanf("%f",&theory.final);
        if(theory.final<0 || theory.final>40){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter attendance mark (0-7) =");
        scanf("%f",&theory.attendance);
        if(theory.attendance<0 || theory.attendance>7){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    theory.average_quiz=(theory.quiz1+theory.quiz2+theory.quiz3)/3.0;
    theory.total=theory.average_quiz+theory.presentation+theory.assignment+theory.midterm+theory.final+theory.attendance;

    theory.grade_point=grade(theory.total);

    return;
}

void faculty_mark_entry_lab(){
    for(int i=1;i<=1;i++){
        printf("Enter lab performance mark (0-20) =");
        scanf("%f",&lab.lab_performance);
        if(lab.lab_performance<0 || lab.lab_performance>20){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter assignment mark (0-5) =");
        scanf("%f",&lab.assignment);
        if(lab.assignment<0 || lab.assignment>5){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter lab report mark (0-25) =");
        scanf("%f",&lab.lab_report);
        if(lab.lab_report<0 || lab.lab_report>25){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter final mark (0-40) =");
        scanf("%f",&lab.final);
        if(lab.final<0 || lab.final>40){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter attendance mark (0-10) =");
        scanf("%f",&lab.attendance);
        if(lab.attendance<0 || lab.attendance>10){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    lab.total=lab.lab_performance+lab.assignment+lab.lab_report+lab.final+lab.attendance;

    lab.grade_point=grade(lab.total);

    return;
}

void faculty_mark_entry_project(){
    for(int i=1;i<=1;i++){
        printf("Enter proposal mark (0-20) =");
        scanf("%f",&project.proposal);
        if(project.proposal<0 || project.proposal>20){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter presentation mark (0-20) =");
        scanf("%f",&project.presentation);
        if(project.presentation<0 || project.presentation>20){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter final mark (0-40) =");
        scanf("%f",&project.final);
        if(project.final<0 || project.final>40){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }
    for(int i=1;i<=1;i++){
        printf("Enter attendance mark (0-10) =");
        scanf("%f",&project.attendance);
        if(project.attendance<0 || project.attendance>10){
            printf("Invalid Input. Try Again\n");
            i--;
        }
    }

    project.total=project.proposal+project.presentation+project.final+project.attendance;

    project.grade_point=grade(project.total);

    return;
}

void faculty_result(){

}

void faculty_mark_entry(char subject[100]){
            int id;
            printf("\n\nEnter ID: ");
            scanf("%d",&id);
            int found = 0;
            FILE *openfile;
            openfile = fopen("Student Password.txt","r");
            while(fread(&pass,sizeof(pass),1,openfile) == 1){
                if(id==pass.id){
                    found = 1;
                    break;
                }
            }
            fclose(openfile);
            if(found == 1){
                faculty_mark_entry_theory();
                found = 0;
                openfile = fopen("Student Result.txt","a");
                openfile = fopen("Student Result.txt","r+");
                while(fread(&theory, sizeof(theory),1,openfile) == 1){
                    if(id==theory.id && strcmp(theory.subject,subject)==0){
                        fseek(openfile,-sizeof(theory), SEEK_CUR);
                        fwrite(&theory,sizeof(theory), 1, openfile);
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    openfile = fopen("Student Result.txt","a+");
                    theory.id=id;
                    strcpy(theory.subject,subject);
                    fwrite(&theory, sizeof(theory), 1, openfile);
                }
                fclose(openfile);

                found = 0;
                openfile = fopen(strcat(subject,".txt"),"a");
                openfile = fopen(strcat(subject,".txt"),"r+");
                while(fread(&theory, sizeof(theory),1,openfile) == 1){
                    if(id==theory.id){
                        fseek(openfile,-sizeof(theory), SEEK_CUR);
                        fwrite(&theory,sizeof(theory), 1, openfile);
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    openfile = fopen(strcat(subject,".txt"),"a+");
                    theory.id=id;
                    fwrite(&theory, sizeof(theory), 1, openfile);
                }
                fclose(openfile);
                printf("Mark entry complete\n");
            }
            else{
                printf("Student is not registered\n");
            }
            return;
}

void faculty_course_dasboard(char subject[100]){
    while(1){
        printf("1. Mark Entry\n");
        printf("2. Result List\n");
        printf("3. Back\n");
        printf("\nSelect a option: ");
        int option;
        scanf("%d",&option);
        if(option==1){
            system("clear");
            faculty_mark_entry(subject);
            continue;
        }
        if(option==2){
            system("clear");
            faculty_result(subject);
            continue;
        }
        if(option==3){
            return;
        }
    }
}

void faculty_course(int id){

    if(id==1001){
        while(1){
            printf("\n\n1. Data Structure\n");
            printf("2. Data Structure Lab\n");
            printf("3. Back\n");
            printf("\nSelect a option: ");
            int option;
            scanf("%d",&option);
            if(option==1){
                system("clear");
                char subject[]="Data Structure";
                faculty_course_dasboard(subject);
                continue;
            }
            if(option==2){
                system("clear");
                char subject[]="Data Structure Lab";
                faculty_course_dasboard(subject);
                continue;
            }
            if(option==3){
                return;
            }
        }
    }
    if(id==1002){
        while(1){
            printf("\n\n1. Software Devlopment Capston Project\n");
            printf("2. Back\n");
            printf("\nSelect a option: ");
            int option;
            scanf("%d",&option);
            if(option==1){
                system("clear");
                char subject[]="Software Devlopment Capston Project";
                faculty_course_dasboard(subject);
                continue;
            }
            if(option==2){
                return;
            }
        }
    }
}

void student_payment_ledger(int id){

}

void student_result(int id){

}

void faculty_password_change(int id){
    FILE *openfile;
    openfile = fopen("Faculty Password.txt","r+");
    while(fread(&pass, sizeof(pass),1,openfile) == 1){
        if(id==pass.id){
            char password[20];
            fflush(stdin);
            printf("Enter Password: ");
            scanf("%s",&password);
            if(strcmp(password,pass.password)==0){
                printf("ID: %d\n",pass.id);
                fflush(stdin);
                printf("Enter New Password: ");
                gets(pass.password);
                fseek(openfile,-sizeof(pass), SEEK_CUR);
                fwrite(&pass,sizeof(pass), 1, openfile);
                printf("Password Changed Successfully\n");
                break;
            }
            else{
                printf("Incorrect Password\n");
                break;
            }
        }
    }
    fclose(openfile);
    return;
}

void student_password_change(int id){
    FILE *openfile;
    openfile = fopen("Student Password.txt","r+");
    while(fread(&pass, sizeof(pass),1,openfile) == 1){
        if(id==pass.id){
            char password[20];
            fflush(stdin);
            printf("Enter Password: ");
            scanf("%s",&password);
            if(strcmp(password,pass.password)==0){
                printf("ID: %d\n",pass.id);
                fflush(stdin);
                printf("Enter New Password: ");
                gets(pass.password);
                fseek(openfile,-sizeof(pass), SEEK_CUR);
                fwrite(&pass,sizeof(pass), 1, openfile);
                printf("Password Changed Successfully\n");
                break;
            }
            else{
                printf("Incorrect Password\n");
                break;
            }
        }
    }
    fclose(openfile);
    return;
}

void faculty_profile_update(int id){
    int found = 0;
    FILE *openfile;
    openfile = fopen("Faculty Record.txt","r+");
    while(fread(&faculty, sizeof(faculty),1,openfile) == 1){
        if(id==faculty.id){
            printf("ID: %d\n",faculty.id);
            fflush(stdin);
            printf("Name: ");
            gets(faculty.name);
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
            fseek(openfile,-sizeof(faculty), SEEK_CUR);
            fwrite(&faculty,sizeof(faculty), 1, openfile);
            found = 1;
            break;
        }
    }
    if(!found){
        openfile = fopen("Faculty Record.txt","a+");
        faculty.id=id;
        printf("ID: %d\n",faculty.id);
        fflush(stdin);
        printf("Name: ");
        gets(faculty.name);
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
    printf("Profile Updated Successfully");
    return;
}

void student_profile_update(int id){
    int found = 0;
    FILE *openfile;
    openfile = fopen("Student Record.txt","r+");
    while(fread(&student, sizeof(student),1,openfile) == 1){
        if(id==student.id){
            printf("ID: %d\n",student.id);
            fflush(stdin);
            printf("Name: ");
            gets(student.name);
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
            fseek(openfile,-sizeof(student), SEEK_CUR);
            fwrite(&student,sizeof(student), 1, openfile);
            found = 1;
            break;
        }
    }
    if(!found){
        openfile = fopen("Student Record.txt","a+");
        student.id=id;
        printf("ID: %d\n",student.id);
        fflush(stdin);
        printf("Name: ");
        gets(student.name);
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
    printf("Profile Updated Successfully");
    return;
}

void faculty_profile(int id){
    int found = 0;
    FILE *openfile;
    openfile = fopen("Faculty Record.txt","a");
    openfile = fopen("Faculty Record.txt","r");
    while(fread(&faculty,sizeof(faculty),1,openfile) == 1){
        if(id==faculty.id){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("ID: %d\n",faculty.id);
        printf("Name: %s\n",faculty.name);
        printf("Designation: %s\n",faculty.designation);
        printf("Department: %s\n",faculty.department);
        printf("E-mail: %s\n",faculty.email);
        printf("Contact Number: %s\n",faculty.phone);
        printf("Address: %s\n",faculty.address);
        printf("Blood Group: %s\n",faculty.blood_group);
        printf("Religion: %s\n",faculty.religion);
    }
    else{
        printf("Please update your profile\n");
    }
    fclose(openfile);
    return; 
}

void student_profile(int id){
    int found = 0;
    FILE *openfile;
    openfile = fopen("Student Record.txt","a");
    openfile = fopen("Student Record.txt","r");
    while(fread(&student,sizeof(student),1,openfile) == 1){
        if(id==student.id){
            found = 1;
            break;
        }
    }
    if(found == 1){
        printf("ID: %d\n",student.id);
        printf("Name: %s\n",student.name);
        printf("Father's Name: %s\n",student.father_name);
        printf("Mother's Name: %s\n",student.mother_name);
        printf("Department: %s\n",student.department);
        printf("E-mail: %s\n",student.email);
        printf("Contact Number: %s\n",student.phone);
        printf("Address: %s\n",student.address);
        printf("Blood Group: %s\n",student.blood_group);
        printf("Religion: %s\n",student.religion);
    }
    else{
        printf("Please update your profile\n");
    }
    fclose(openfile);
    return;
}

void faculty_dasboard(int id){
    while(1){
        printf("\n\nID : %d\n\n",id);
        printf("1. Profile\n");
        printf("2. Profile Update\n");
        printf("3. Password Change\n");
        printf("4. Courses\n");
        printf("5. Logout\n");
        printf("\nSelect a option: ");

        int option;
        scanf("%d",&option);
        if(option==1){
            system("clear");
            faculty_profile(id);
            continue;
        }
        if(option==2){
            system("clear");
            faculty_profile_update(id);
            continue;
        }
        if(option==3){
            system("clear");
            faculty_password_change(id);
            continue;
        }
        if(option==4){
            system("clear");
            faculty_course(id);
            continue;
        }
        if(option==5){
            return;
        }
    }
}

void student_dasboard(int id){
    while(1){
        printf("\n\nID : %d\n\n",id);
        printf("1. Profile\n");
        printf("2. Profile Update\n");
        printf("3. Password Change\n");
        printf("4. Result\n");
        printf("5. Payment Ladger\n");
        printf("6. Logout\n");
        printf("\nSelect a option: ");

        int option;
        scanf("%d",&option);
        if(option==1){
            system("clear");
            student_profile(id);
            continue;
        }
        if(option==2){
            system("clear");
            student_profile_update(id);
            continue;
        }
        if(option==3){
            system("clear");
            student_password_change(id);
            continue;
        }
        if(option==4){
            system("clear");
            student_result(id);
            continue;
        }
        if(option==5){
            system("clear");
            student_payment_ledger(id);
            continue;
        }
        if(option==6){
            return;
        }
    }
}

void faculty_login(){
    int id;
    char password[20];
    printf("\n\nEnter Your ID: ");
    scanf("%d",&id);
    fflush(stdin);
    printf("Enter Your Password: ");
    scanf("%s",&password);
    int found = 0;
    FILE *openfile;
    openfile = fopen("Faculty Password.txt","r");
    while(fread(&pass,sizeof(pass),1,openfile) == 1){
        if(id==pass.id){
            found = 1;
            break;
        }
    }
    if(found == 1){
        if(strcmp(password,pass.password)==0){
            system("clear");
            faculty_dasboard(id);
            return;
        }
        else{
            printf("Incorrect Password\n");
        }
    }
    else{
        printf("Incorrect ID\n");
    }
    fclose(openfile);
    return;
}

void student_login(){
    int id;
    char password[20];
    printf("\n\nEnter Your ID: ");
    scanf("%d",&id);
    fflush(stdin);
    printf("Enter Your Password: ");
    scanf("%s",&password);
    int found = 0;
    FILE *openfile;
    openfile = fopen("Student Password.txt","r");
    while(fread(&pass,sizeof(pass),1,openfile) == 1){
        if(id==pass.id){
            found = 1;
            break;
        }
    }
    if(found == 1){
        if(strcmp(password,pass.password)==0){
            system("clear");
            student_dasboard(id);
            return;
        }
        else{
            printf("Incorrect Password\n");
        } 
    }
    else{
        printf("Incorrect ID\n");
    }
    fclose(openfile);
    return;
}

int main(){
    while(1){
        printf("\n\n|| Welcome to DIU Portal ||\n\n");
        printf("   1. Faculty Login\n");
        printf("   2. Student Login\n");
        printf("   3. Exit\n\n");
        printf("   Select a option : ");
    
        int option;
        scanf("%d",&option);
        if(option==1){
            system("clear");
            faculty_login();
            continue;
        }
        if(option==2){
            system("clear");
            student_login();
            continue;
        }
        if(option==3){
            return 0;
        }
    }
}
 

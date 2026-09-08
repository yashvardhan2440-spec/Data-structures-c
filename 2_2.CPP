#include <stdio.h>
#include <conio.h>

struct Student
{
    char name[30];
    int roll;
    char address[50];
};

void main()
{
    struct Student s[5];
    int i;

    clrscr();

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Address: ");
        scanf("%s", s[i].address);
    }

    printf("\n\nStudent Details:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Address: %s\n", s[i].address);
    }

    getch();
}
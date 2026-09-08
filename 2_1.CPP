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
    struct Student s;

    clrscr();

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Address: ");
    scanf("%s", s.address);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Address: %s\n", s.address);

    getch();
}

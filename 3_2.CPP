#include <stdio.h>
#include <conio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

void main()
{
    struct Student s;
    struct Student *ptr;

    clrscr();

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    ptr = &s;

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    getch();
}
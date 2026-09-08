#include <stdio.h>
#include <conio.h>

struct Organization
{
    char orgName[30];
    int orgID;

    struct Employee
    {
        int empID;
        float salary;
        char empName[30];
    } emp[2];
};

void main()
{
    struct Organization org[2];
    int i, j;

    clrscr();

    for (i = 0; i < 2; i++)
    {
        printf("\nEnter details of Organization %d:\n", i + 1);

        printf("Enter Organization Name: ");
        scanf("%s", org[i].orgName);

        printf("Enter Organization ID: ");
        scanf("%d", &org[i].orgID);

        for (j = 0; j < 2; j++)
        {
            printf("\nEnter details of Employee %d:\n", j + 1);

            printf("Enter Employee ID: ");
            scanf("%d", &org[i].emp[j].empID);

            printf("Enter Employee Name: ");
            scanf("%s", org[i].emp[j].empName);

            printf("Enter Employee Salary: ");
            scanf("%f", &org[i].emp[j].salary);
        }
    }

    printf("\n\n========== ORGANIZATION DETAILS ==========\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nOrganization %d\n", i + 1);
        printf("Organization Name: %s\n", org[i].orgName);
        printf("Organization ID: %d\n", org[i].orgID);

        printf("\nEmployees:\n");

        for (j = 0; j < 2; j++)
        {
            printf("\nEmployee %d:\n", j + 1);
            printf("Employee ID: %d\n", org[i].emp[j].empID);
            printf("Employee Name: %s\n", org[i].emp[j].empName);
            printf("Employee Salary: %.2f\n", org[i].emp[j].salary);
        }
    }

    getch();
}
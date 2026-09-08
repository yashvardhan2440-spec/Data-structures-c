#include <stdio.h>
#include <conio.h>

void main()
{
    int a[3] = {10, 20, 30};
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int *p[3];        /* Array of pointers */
    int (*q)[3];      /* Pointer to an array */

    clrscr();

    /* Array of pointers */
    p[0] = &a[0];
    p[1] = &a[1];
    p[2] = &a[2];

    printf("Array of Pointers:\n");

    printf("p[0] = %d\n", *p[0]);
    printf("p[1] = %d\n", *p[1]);
    printf("p[2] = %d\n", *p[2]);

    /* Pointer to an array */
    q = b;

    printf("\nPointer to an Array:\n");

    printf("b[0][0] = %d\n", q[0][0]);
    printf("b[0][1] = %d\n", q[0][1]);
    printf("b[0][2] = %d\n", q[0][2]);

    printf("b[1][0] = %d\n", q[1][0]);
    printf("b[1][1] = %d\n", q[1][1]);
    printf("b[1][2] = %d\n", q[1][2]);

    getch();
}
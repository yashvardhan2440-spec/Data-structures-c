#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int x, y;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping:");
    printf("\nx = %d, y = %d", x, y);

    swap(&x, &y);

    printf("\n\nAfter swapping:");
    printf("\nx = %d, y = %d", x, y);

    getch();
}
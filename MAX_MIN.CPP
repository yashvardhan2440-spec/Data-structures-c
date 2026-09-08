#include <stdio.h>
#include <conio.h>

#define MAX 100

void main()
{
    int a[MAX];
    int n, i;
    int min, max;
    int secondMin, secondMax;

    clrscr();

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];
    max = a[0];

    /* Find minimum and maximum */
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    /* Initialize second smallest and second largest */
    secondMin = 99999;
    secondMax = -99999;

    for (i = 0; i < n; i++)
    {
        if (a[i] < secondMin && a[i] != min)
            secondMin = a[i];

        if (a[i] > secondMax && a[i] != max)
            secondMax = a[i];
    }

    printf("\nMinimum element = %d", min);
    printf("\nMaximum element = %d", max);

    if (secondMin != 99999)
        printf("\nSecond smallest element = %d", secondMin);
    else
        printf("\nSecond smallest element does not exist");

    if (secondMax != -99999)
        printf("\nSecond largest element = %d", secondMax);
    else
        printf("\nSecond largest element does not exist");

    getch();
}
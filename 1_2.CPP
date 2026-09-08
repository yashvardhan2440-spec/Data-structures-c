#include <stdio.h>
#include <conio.h>

#define MAX 100

void display(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}

void bubbleSort(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int a[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void selectionSort(int a[], int n)
{
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void main()
{
    int a[MAX], b[MAX], c[MAX];
    int n, i;

    clrscr();

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
        c[i] = a[i];
    }

    /* Bubble Sort */
    bubbleSort(a, n);
    printf("\nBubble Sort: ");
    display(a, n);

    /* Insertion Sort */
    insertionSort(b, n);
    printf("\nInsertion Sort: ");
    display(b, n);

    /* Selection Sort */
    selectionSort(c, n);
    printf("\nSelection Sort: ");
    display(c, n);

    getch();
}
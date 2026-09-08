#include <stdio.h>
#include <conio.h>

#define MAX 100

int stack[MAX];
int top = -1;

int isEmpty()
{
    return top == -1;
}

void push(int x)
{
    if (top < MAX - 1)
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    int x;

    x = stack[top];
    top--;

    return x;
}

int topElement()
{
    return stack[top];
}

/* Insert element in sorted stack */
void sortedInsert(int x)
{
    int temp;

    if (isEmpty() || x >= topElement())
    {
        push(x);
        return;
    }

    temp = pop();

    sortedInsert(x);

    push(temp);
}

/* Sort stack using recursion */
void sortStack()
{
    int temp;

    if (isEmpty())
        return;

    temp = pop();

    sortStack();

    sortedInsert(temp);
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("Stack is empty");
        return;
    }

    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
}

void main()
{
    int n, x;

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    while (n > 0)
    {
        scanf("%d", &x);
        push(x);
        n--;
    }

    sortStack();

    printf("\nSorted Stack:\n");
    display();

    getch();
}
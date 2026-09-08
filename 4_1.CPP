#include <stdio.h>
#include <conio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int isEmpty()
{
    return top == -1;
}

int isFull()
{
    return top == MAX - 1;
}

void push(int value)
{
    if (isFull())
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = value;
        printf("Element pushed: %d\n", value);
    }
}

void pop()
{
    if (isEmpty())
        printf("Stack Underflow\n");
    else
    {
        printf("Element popped: %d\n", stack[top]);
        top--;
    }
}

void print_top()
{
    if (isEmpty())
        printf("Stack is empty\n");
    else
        printf("Top element: %d\n", stack[top]);
}

void main()
{
    int choice, value;

    clrscr();

    while (1)
    {
        printf("\n1. isEmpty");
        printf("\n2. isFull");
        printf("\n3. Push");
        printf("\n4. Pop");
        printf("\n5. Print Top");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (isEmpty())
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
                break;

            case 2:
                if (isFull())
                    printf("Stack is full\n");
                else
                    printf("Stack is not full\n");
                break;

            case 3:
                printf("Enter element: ");
                scanf("%d", &value);
                push(value);
                break;

            case 4:
                pop();
                break;

            case 5:
                print_top();
                break;

            case 6:
                getch();
                return;

            default:
                printf("Invalid choice\n");
        }
    }
}
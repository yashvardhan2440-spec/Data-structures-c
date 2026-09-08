#include <stdio.h>
#include <conio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

char pop()
{
    char ch;

    ch = stack[top];
    top--;

    return ch;
}

int isMatching(char open, char close)
{
    if (open == '(' && close == ')')
        return 1;

    if (open == '[' && close == ']')
        return 1;

    if (open == '{' && close == '}')
        return 1;

    return 0;
}

int isBalanced(char exp[])
{
    int i;
    char ch, open;

    top = -1;

    for (i = 0; exp[i] != '\0'; i++)
    {
        ch = exp[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (top == -1)
                return 0;

            open = pop();

            if (!isMatching(open, ch))
                return 0;
        }
    }

    if (top == -1)
        return 1;

    return 0;
}

void main()
{
    char exp[MAX];

    clrscr();

    printf("Enter expression: ");
    gets(exp);

    if (isBalanced(exp))
        printf("\nBalanced");
    else
        printf("\nNot Balanced");

    getch();
}
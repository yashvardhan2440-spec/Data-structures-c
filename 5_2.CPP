#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    char x;

    x = stack[top];
    top--;

    return x;
}

int precedence(char x)
{
    if (x == '^')
        return 3;

    if (x == '*' || x == '/')
        return 2;

    if (x == '+' || x == '-')
        return 1;

    return 0;
}

void main()
{
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    char ch;

    clrscr();

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        /* If operand, add to postfix */
        if (isalnum(ch))
        {
            postfix[j] = ch;
            j++;
        }

        /* If opening bracket */
        else if (ch == '(')
        {
            push(ch);
        }

        /* If closing bracket */
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j] = pop();
                j++;
            }

            pop();   /* Remove '(' */
        }

        /* If operator */
        else
        {
            while (top != -1 &&
                   stack[top] != '(' &&
                   precedence(stack[top]) >= precedence(ch))
            {
                postfix[j] = pop();
                j++;
            }

            push(ch);
        }
    }

    /* Pop remaining operators */
    while (top != -1)
    {
        postfix[j] = pop();
        j++;
    }

    postfix[j] = '\0';

    printf("\nPostfix expression: %s", postfix);

    getch();
}
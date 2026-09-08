#include <stdio.h>
#include <conio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x)
{
    top++;
    stack[top] = x;
}

int pop()
{
    int x;

    x = stack[top];
    top--;

    return x;
}

int evaluate(char exp[])
{
    int i = 0;
    int a, b, result;

    top = -1;

    while (exp[i] != '\0')
    {
        if (exp[i] >= '0' && exp[i] <= '9')
        {
            push(exp[i] - '0');
        }
        else if (exp[i] == '+' || exp[i] == '-' ||
                 exp[i] == '*' || exp[i] == '/')
        {
            b = pop();
            a = pop();

            switch (exp[i])
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;
            }

            push(result);
        }

        i++;
    }

    return pop();
}

void main()
{
    char exp1[] = "231*+9-";
    char exp2[] = "22+2/5*7+";

    clrscr();

    printf("Postfix Expression 1: 2 3 1 * + 9 -");
    printf("\nOutput: %d", evaluate(exp1));

    printf("\n\nPostfix Expression 2: 2 2 + 2 / 5 * 7 +");
    printf("\nOutput: %d", evaluate(exp2));

    getch();
}
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#define max 100

int arr[max];
int top=-1;
void push(int x){
  top++;
  arr[top]=x;
}
int pop(){
 return arr[top--];
}
int evaluate(char exp[]){
 int i;
 int a,b,result;
 for(i=0;exp[i]!='\0';i++)
 {
  if(exp[i]>='0'&&exp[i]<='9')
  {
   push(exp[i]-'0');
  }
  else if(exp[i]==' ')
   {
     continue;
   }
   else
   {
    b=pop();
    a=pop();
    switch(exp[i])
    {
      case'+':
	result=a+b;
	break;
      case'-':
	result=a-b;
	break;
      case'*':
	result=a*b;
	break;
      case'/':
	result=a/b;
	break;
      }
     push(result);
    }
  }
    return pop();
 }
void main()
{
 char exp1[]="231*+9-";
 char exp2[]="22+2/5*7+";
 clrscr();

 printf("postfix expresion 1 : %s",exp1);
 printf("\noutput = %d",evaluate(exp1));
 top=-1;

 printf("\npostfix exp 2: %s",exp2);
 printf("\noutput = %d",evaluate(exp2));

 getch();
}




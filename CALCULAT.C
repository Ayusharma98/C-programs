#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,result;
char op;
printf("Enter the expression");
scanf("%d%c%d",&a,&op,&b);
clrscr();
switch(op)
{
case '+':
result=a+b;
break;
case '*':
result=a*b;
break;
case '-':
result=a-b;
break;
case '/':
result=a/b;
break;
}
printf("result=%d",result);
getch();
}
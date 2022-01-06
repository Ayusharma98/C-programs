#include<stdio.h>
#include<conio.h>
int add(void)
{
int x,y,result;
scanf("%d%d",&x,&y);
result=x+y;
return(result);
}

void main()
{
int add(void);
int result;
clrscr();
result=add();
printf("%d",result);
getch();
}
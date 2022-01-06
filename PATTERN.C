#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count;
count=0;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
if(count=count+1)
{
printf("%d",count);
}
}
printf("\n");
}
getch();
}
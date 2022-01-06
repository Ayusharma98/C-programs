#include<stdio.h>
#include<conio.h>
void main()
{
int x[10];
int i,searchItem;
clrscr();
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
printf("Enter the number you wamt to search:-");
scanf("%d",&searchItem);
for(i=0;i<10;i++)
{
if(x[i]==searchItem)
{
printf("location=%d",i+1);
break;
}
if(i==10)
{
printf("searchItem is not available");
}
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter a number: ");
scanf("%d",&a);
if(a%97==0)
{
printf("Number is divisible by 97");
}
else
{
printf("Number is not divisible by 97");
}
getch();
}
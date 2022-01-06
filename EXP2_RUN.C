#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x,y,z,k,result;
 clrscr();
 printf("Enter your values: ");
 scanf("%d%d%d%d",&x,&y,&z,&k);
 result=3*x/y-z+k;
 printf("The value of result is: %d",result);
 getch();

}
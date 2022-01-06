#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str1[30];
char str2[30];
clrscr();
gets(str1);
strcpy(str2,str1);
printf("%s",str1);
getch();
}

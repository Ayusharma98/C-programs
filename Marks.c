/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int physics,chemistry,math;
 float total;
 printf("Enter your physics marks: \n");
 scanf("%d",&physics);
printf("Enter your chemistry marks: \n");
scanf("%d",&chemistry);
printf("Enter your math marks: \n");
scanf("%d",&math);
total=(physics+chemistry+math)/3;
if((total<40) || physics<33 || chemistry<33 || math<33)
printf("Your total is %f\n You are FAIL",total);
else
printf("Your total is %f\n Hurray you are PASS",total);
    return 0;
}

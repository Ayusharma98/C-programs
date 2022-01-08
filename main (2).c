/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main ()
{
  int year;
  printf ("Enter year you want to check: ");
  scanf ("%d", &year);
  if (year % 4 == 0 && year % 100 != 0)
    {
      printf ("Year %d is a Leap year", year);
    }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
      printf ("Year %d is a Leap year", year);
    }
  else
    {
      printf ("Year %d is Not a Leap year", year);
    }
}


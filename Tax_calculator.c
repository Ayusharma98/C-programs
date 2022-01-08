/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  float salary, tax = 0;
  printf ("Enter your salary: ");
  scanf ("%f", &salary);
  if (salary >= 250000 && salary <= 500000)	//if salary is between 2.5l to 5.0l then tax to be paid is 5%
    {
      tax = tax + 0.05 * (salary - 250000);
    }
  if (salary >= 500000 && salary <= 1000000)	//if salary is between 5.0l to 10l then tax to be paid is 20%
    {
      tax = tax + 0.20 * (salary - 500000);
    }
  if (salary >= 1000000)	//if salary is above to equal to 10l then tax to be paid is 30%
    {
      tax = tax + 0.30 * (salary - 1000000);
    }
  printf ("Your annual tax to be paid is %f\n", tax);

  return 0;
}


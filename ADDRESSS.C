//wap to display your address which includes your name, city name, area, house number
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char your_name[20];
char city_name[20];
char Area[20];
char house_no[20];
clrscr();
printf("Enter Your name: ");
gets(your_name);
printf("Enter your city name: ");
gets(city_name);
printf("Enter your Area: ");
gets(Area);
printf("Enter your House_no: ");
gets(house_no);
printf("%s\n",your_name);
printf("%s\n",city_name);
printf("%s\n",Area);
printf("%s\n",house_no);
getch();
}
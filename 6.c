#include<stdio.h>
int main()
{
int year=2007;
{
printf("enter the year");
}
if(year%400==0)
{
printf("the year is leap year");
}
else if(year%100==0)
{
printf("the year is not leap year");
}
else if(year%4==0)
{
printf("the year is leap year");
}
else
{
printf("the year is not leap year");
}
return 0;
}

#include<stdio.h>
void main()
{
int n1=5,n2=9,n3=1;
printf("enter the three values");
if(n1>n2)
{
if(n1>n3)
{
printf("n1 is greater");
}
else
{
printf("n3 is greater");
}
}
else if(n2>n3)
{
printf("n2 is greater");
}
else
{
printf("n3 is greater");
}
}

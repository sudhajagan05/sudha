#include<stdio.h>
int main()
{
long long n=89456;
int count=0;
{
printf("enter an integer");
}
while(n!=0)
{
n/=10;
++count;
}
{
printf("no.of digits:%d",count);
}
}

#include<stdio.h>
#include<stdio.h>
int main()
{
int num=7,i,prime=0;
for(i=2;i<=(num/2);++i)
{
if(num%i==0)
{
    prime=1;
break;
}
}
if(prime==0)
{
printf("the num is prime",num);
}
else
{
printf("the num is not prime",num);
}
return 0;
}

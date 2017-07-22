#include<stdio.h>
int main()
{
int n=120,num,rev=0;
printf("enter the numbers");
num=n;
while(n!=0)
{
rev=(rev*10)+(n%10);
n=n/10;
}
if(rev==num)
{
printf("%d is palindrome",num);
}
else
{
printf("%d is not palindrome",num);
}
return 0;
}

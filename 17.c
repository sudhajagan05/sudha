#include<stdio.h>
int main()
{
int arms=153,check,rem,sum=0;
check=arms;
while(check!=0)
{
rem=check%10;
sum=sum+(rem*rem*rem);
check=check/10;
}
if(sum==arms)
{
printf("the num is armstrong",arms);
}
else
{
printf("the num is not armstrong",arms);
return 0;
}
}

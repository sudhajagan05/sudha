#include <stdio.h>
int main()
{
    double num, num2, num3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &num, &num2, &num3);

    if( num>=num2 && num>=num3 )
        printf("%.2f is the largest number.", num);

    if( num2>=num && num2>=num3 )
        printf("%.2f is the largest number.", num2);

    if( num3>=num && num3>=num2 )
        printf("%.2f is the largest number.", num3);

    return 0;
}

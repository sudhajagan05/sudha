#include <stdio.h>
int main()
{
    double n, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n, &n2, &n3);

    if( n>=n2 && n>=n3 )
        printf("%.2f is the largest number.", n);

    if( n2>=n && n2>=n3 )
        printf("%.2f is the largest number.", n2);

    if( n3>=n && n3>=n2 )
        printf("%.2f is the largest number.", n3);

    return 0;
}

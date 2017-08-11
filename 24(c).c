#include <stdio.h>
int main()
{
    int e, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &e);

    while(n != 0)
    {
        remainder = e%10;
        reversedNumber = reversedNumber*10 + remainder;
        e /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}

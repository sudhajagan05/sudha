#include <stdio.h>
void main()
{

    scanf("%d", &limit);

    printf("Fibonacci Series is ...\n");

    printf("%d\n", fib1);

    printf("%d\n", fib2);

    count = 2;

    while (count < limit)

    {

        fib3 = fib1 + fib2;

        count++;

        printf("%d\n", fib3);

        fib1 = fib2;

        fib2 = fib3;

    }

}

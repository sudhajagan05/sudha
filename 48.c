#include <stdio.h>

int main()
{
    int u, i;
    float num[100], sum = 0.0, average;

    printf("Enter the numbers of elements: ");
    scanf("%d", &u);

    while (u > 100 || u <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for(i = 0; i < u; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    average = sum / u;
    printf("Average = %.2f", average);

    return 0;
}

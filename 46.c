#include <stdio.h>
int main()
{
    int y, i;

    printf("Enter an integer: ");
    scanf("%d",&y);

    for(i=1; i<=10; ++i)
    {
        printf("%d * %d = %d \n", y, i, y*i);
    }
    
    return 0;
}

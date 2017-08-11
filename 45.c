#include <stdio.h>

#define mi 0
#define ma 9 

int main()
{
    int n;

    while (1) {
        printf("Enter a number (%d-%d) :",mi , ma);
        scanf("%d", &n);

        if (n >= mi && n <= ma) {
            printf("Good\n");
        } else {
            printf("Damn you!\n");
            break;
        }
    }

    return 0;
}

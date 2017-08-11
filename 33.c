
#include <stdio.h>
#include <string.h>
 
int main()
{
    char r, word[50];
    int i, freq = 0, flag = 0;
 
    printf("Enter character: ");
    scanf("%c", &r);
    printf("Now enter the word: ");
    scanf("%s", word);
    printf("Positions of '%c' in %s are: ", r, word);
    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] == r)
        {
            flag = 1;
            printf("%d  ", i + 1);
            freq++;
        }
    }
    if (flag)
    {
        printf("\nCharacter '%c' occured for %d times.\n", r, freq);
    }
    else
    {
        printf("None\n");
    }
 
    return 0;
}

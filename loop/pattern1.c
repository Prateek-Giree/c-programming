#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            system("COLOR E ");
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {
            system("COLOR C");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
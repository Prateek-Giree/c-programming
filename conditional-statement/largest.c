// to print largest among three number
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    printf("enter a number");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greater number", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater number", b);
    }
    else
    {
        printf(" %d is greater number", c);
    }
    return 0;
}
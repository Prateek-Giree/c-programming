// enter three number a print largest among them
#include <stdio.h>
void check(int, int, int);
int main()
{
    int a, b, c;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    printf("enter a number");
    scanf("%d", &c);
    check(a, b, c);
    return 0;
}
void check(int a, int b, int c)
{
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
        printf("%d is greater number", c);
    }
}

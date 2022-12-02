#include <stdio.h>
int main()
{
    int a, b, s, t;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    if (a != b)
    {
        s = a + b;
        printf("the sum of two digits is %d", s);
    }
    else
    {
        t = 3 * a + b;
        printf("the triple of their sum is %s", t);
    }
    return 0;
}
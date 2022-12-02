// WAP to find greater number between 4 numbers using neasted if
#include <stdio.h>
int main()
{
    int a, b, c, d, l;
    printf("enter a number ");
    scanf("%d", &a);
    printf("enter a number ");
    scanf("%d", &b);
    printf("enter a number ");
    scanf("%d", &c);
    printf("enter a number ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                l = a;
            }
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            if (b > d)
            {
                l = b;
            }
        }
    }
    else if (c > b)
    {
        if (c > a)
        {
            if (c > d)
            {
                l = a;
            }
        }
    }
    else
    {
        l = d;
    }
    printf("the largest number is %d", l);

    return 0;
}
// It only work for one digit number .I don't know what the fuck is wrong with this program
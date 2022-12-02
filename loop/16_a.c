// to check armstrong number
#include <stdio.h>
int main()
{
    int rem,n, num, arm = 0;
    printf("enter a number");
    scanf("%d", &num);
    n = num;
    while (num != 0)
    {
        rem = num % 10;
        arm = arm + rem * rem * rem;
        num = num / 10;
    }
    if (arm == n)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
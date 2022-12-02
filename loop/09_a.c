// calculate the factorial of a number
#include <stdio.h>
int main()
{
    int i, fact = 1, num;
    printf("enter a number ");
    scanf("%d", &num);

    for (i = num; i > 0; i--)
    {
        fact *= i;
    }
    printf("the factorial of %d is %d ", num, fact);

    return 0;
}
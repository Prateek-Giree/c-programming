// to print sum of digits of a number
#include <stdio.h>
int main()
{
    int num, sum = 0, rem;
    printf("enter a  number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("the sum is %d\t", sum);
    return 0;
}
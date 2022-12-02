// to print reverse of a number
#include <stdio.h>
int main()
{
    int num, rev=0, Remainder;
    printf("enter a number");
    scanf("%d", &num);
    while (num != 0)
    {
        Remainder = num % 10;
        rev = rev * 10 + Remainder;
        num = num / 10;
    }
    printf("the reverse of a number is %d ", rev);
    return 0;
}
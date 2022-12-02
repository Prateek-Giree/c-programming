// to find the sum of cube of each digits of a number
#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, sum = 0;
    printf("enter a number \n");
    scanf("%d ", &num);
    do
    {
        rem = num % 10;
        sum = sum + pow(rem, 3);
        num = num / 10;
    } while (num != 0);
    printf("the sum of cube of each digit of a number is %d ", sum);
    return 0;
}
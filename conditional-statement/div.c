// wirte a program to check wheather a number is divisible by 10 or not 
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if (a % 10 == 0)
    {
        printf("the number is divisible by 10 ");
    }
    else
    {
        printf("the number is not divisible by 10");
    }

    return 0;
}
// to check wheather the number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    (a % 5 == 0) ? printf("%d is divisible by 5", a) : printf("%d is not divisible by 5", a);
    return 0;
}
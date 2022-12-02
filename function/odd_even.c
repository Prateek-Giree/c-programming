// to check wheather the number is odd or even
#include <stdio.h>
void check(int);
int main()
{

    int a;
    printf("enter a number ");
    scanf("%d", &a);
    check(a);
    return 0;
}
void check(int a)
{
    if (a % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
}
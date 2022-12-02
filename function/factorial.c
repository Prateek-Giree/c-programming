// this is example of recursive function
#include <stdio.h>
int fact(int);
int main()
{
    int num, factorial;
    printf("enter a number");
    scanf("%d", &num);
    factorial = fact(num);
    printf("the factorial is %d", factorial);
    fact(num);

    return 0;
}
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

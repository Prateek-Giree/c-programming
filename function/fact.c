// print factorial using funtion
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
    int i, f = 1;
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}
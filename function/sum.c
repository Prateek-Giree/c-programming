// find sum of two number using fumction
#include <stdio.h>
int sum(int , int );
int main()
{
    int a, b,s=0;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    s=sum(a,b);
    printf("the sum is %d",s);
  
    return 0;
}
int sum(int a, int b)
{
    int add;
    add = a + b;
    return add;
}
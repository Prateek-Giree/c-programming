// find product using function
#include <stdio.h>
int pro(int, int);
int main()
{
    int a, b, p;
    printf("enter a number");
    scanf("%d", &a);
    printf("enter a number");
    scanf("%d", &b);
    p = pro(a, b);
    printf("the product is %d", p);
    return 0;
}
int pro(int a, int b)
{
    int prod;
    prod = a * b;
    return prod;
    
}

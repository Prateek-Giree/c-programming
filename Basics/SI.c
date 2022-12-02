// write a program to find simple interest 
#include <stdio.h>
int main()
{
    int p, t;
    float si, r;
    printf("enter principle");
    scanf(" %d",&p);

    printf("enter rate ");
    scanf("%f",&r);

    printf("enter time ");
    scanf("%d",&t);

    si=(p*t*r)/100;
    printf("the simple interest is %f",si);
    return 0;
}
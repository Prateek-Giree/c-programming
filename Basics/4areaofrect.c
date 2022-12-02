// write a program to find area of rectangle

#include <stdio.h>

int main()
{
    int l, b, a;
    printf("enter length\n");
    scanf("%d", &l);
    printf("enter breadth\n");
    scanf("%d", &b);
    a = l * b;
    printf("the area of rectangle is : %d", a);
    return 0;
}
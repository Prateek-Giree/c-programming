// write a program to find area of circle
#include <stdio.h>
#include <math.h>
int main()
{
    int r;
    float a;
    printf("enter the radius");
    scanf("%d", &r);
    a = 3.14 * pow(r, 2);
    printf("the area of circle is %f", a);

    return 0;
}
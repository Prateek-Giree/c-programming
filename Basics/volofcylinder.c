// calculate the volume of cylinder 
#include <stdio.h>
#include <math.h>
int main()
{
    int r, h;
    float v;
    printf("enter the radius");
    scanf("%d", &r);
    printf("enter the height");
    scanf("%d", &h);
    v = 3.14 * pow(r, 2) * h;
    printf("the volume of cylinder is %f", v);
    return 0;
}
// find root of quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r, R; // quadratic euqation has two roots. Roots are stored in r,R
    printf("enter value of a from equation \n");
    scanf("%f", &a);
    printf("enter value of b from equation \n");
    scanf("%f", &b);
    printf("enter value of c from equation \n");
    scanf("%f", &c);

    r = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
    R = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

    printf("the first root is %f\n", r);
    printf("the second root is %f\n", R);

    return 0;
}
// WAP to calculate "1 for area of circle,2 for area of rectangle,3 for area of square" using switch-case statement
#include <stdio.h>
#include <math.h>
int main()
{
    int r, l, b, R, s, n;
    float c;
    printf("choose 1 for area of circle \n");
    printf("choose 2 for area of rectangle\n");
    printf("choose 3 for area of square\n");

    printf("enter your choice ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("enter radius");
        scanf("%d", &r);
        c = 3.14 * r;
        printf("the area of circle is %f", c);

    case 2:
        printf("enter length");
        scanf("%d", &l);
        printf("enter breadth");
        scanf("%d", &b);
        R = l * b;
        printf("the area of circle is %d ", R);

    case 3:
        printf("enter lenght");
        scanf("%d", &l);
        s = pow(l, 2);
        printf("the area of square is %d", s);
    }

    return 0;
}
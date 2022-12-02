// WAP to input two number and find sum difference or product on the basis of "1 for sum , 2 for difference, 3 for product"
#include <stdio.h>
int main()
{
    int n, a, b, s, p, d;
    printf("choose 1 for sum\n");
    printf("choose 2 for difference\n");
    printf("choose 3 for product\n");

    printf(" enter your choice\n");
    scanf("%d", &n);

    // printf("enter a number");
    // scanf("%d", &a);

    // printf("enter a number");
    // scanf("%d", &b);
    switch (n)
    {
    case 1:
        printf("enter a number");
        scanf("%d", &a);

        printf("enter a number");
        scanf("%d", &b);
        s = a + b;
        printf("the sum is %d", s);
        break;

    case 2:
        printf("enter a number");
        scanf("%d", &a);

        printf("enter a number");
        scanf("%d", &b);
        d = a - b;
        printf("the difference is %d", d);
        break;

    case 3:
        printf("enter a number");
        scanf("%d", &a);

        printf("enter a number");
        scanf("%d", &b);

        p = a * b;
        printf("the product is %d", p);
        break;

    default:
        printf("please enter number between 1 to 3");
        break;
    }

    return 0;
}
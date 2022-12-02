//write a proram to find the days of week corresponding to the entered number
#include <stdio.h>
int main()
{
    int n;
    printf("choose number between 1 to 7 ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("sunday");
        break;

    case 2:
        printf("monday");
        break;

    case 3:
        printf("tuesday");
        break;

    case 4:
        printf("wednesday");
        break;

    case 5:
        printf("thursday");
        break;

    case 6:
        printf("friday");
        break;

    case 7:
        printf("saturday");
        break;

    default:
        printf("invalid choice");
    }
    return 0;
}
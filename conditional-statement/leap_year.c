// WAP to find wheather the inputed year is leap yrar or not
#include <stdio.h>
int main()
{
    int y;
    printf("enter a year");
    scanf("%d", &y);
    if (y % 4 == 0 || y % 400 == 0) //leap year if the year is perfectly divisible by 4 or 400
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not leap year ");
    }

    return 0;
}
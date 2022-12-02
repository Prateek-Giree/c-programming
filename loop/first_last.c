// to find first and last digits of a number
#include <stdio.h>
int main()
{

    int n, temp;
    printf("Enter any number: ");
    scanf("%d", &n);
    temp = n;
    // iteration to find first digit
    while (n >= 10)
    {
        n = n / 10;
    }
    printf("First digit = %d \n", n);

    // itretion to find last digit
    temp %= 10;
    printf("Last digit = %d", temp);
    return 0;
}
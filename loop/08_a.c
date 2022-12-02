// sum of number occuring in multiplication table of 8 (from 8 to 80)
#include <stdio.h>
int main()
{
    int i, sum;
    for (i = 8; i <= 80; i = i + 8)

    {
        sum = sum + i;
    }
    printf(" the sum is %d", sum);
    return 0;
}
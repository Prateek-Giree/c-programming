// print fabonicci series
#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, c;
    for (i = 1; i <= 50; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
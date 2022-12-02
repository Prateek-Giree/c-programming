#include <stdio.h>
int main()
{
    int i, n = 1;
    for (i = 3; i <= 50; i += 2)
    {
        printf("%d ", n);
        n = n + i;
    }

    return 0;
}
// example of continue statement
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 4 || i==8)
        {
            continue;
            printf("%d\t", i);
        }
    }

    return 0;
}
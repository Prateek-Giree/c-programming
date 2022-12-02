// multiplication table of 10 in reverse order
#include <stdio.h>
int main()
{
    int i;
    printf("****multiplication table of 10****\n");
    for (i = 10; i > 0; i--)
    {
        printf("%d*%d=%d\n", 10, i, i * 10);
    }
    return 0;
}
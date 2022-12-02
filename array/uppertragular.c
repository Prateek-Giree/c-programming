// display upper trangular matrix
#include <stdio.h>
int main()
{
    int i, j, n, m;
    static int arr[5][5]; // static makes the initial value 0.
    printf("enter row");
    scanf("%d", &n);
    printf("enter column");
    scanf("%d", &m);
    if (n == m)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i <= j)
                {
                    printf("enter matrix elements arr[%d][%d]\n", i, j);
                    scanf("%d", &arr[i][j]);
                }
            }
        }
        printf("\nDisplaying upper trangular matrix\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("the matrix should be square");
    }
}
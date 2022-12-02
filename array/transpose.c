// display nxm matrix and find transpose of each row
#include <stdio.h>
int main()
{
    int i, j, arr[5][5], n, m;
    printf("enter row");
    scanf("%d", &n);
    printf("enter column");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("enter matrix elements\n");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the elements of matrix is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("the trasnpose of matrix is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
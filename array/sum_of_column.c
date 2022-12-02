// display nxm matrix and find transpose of each row
#include <stdio.h>
int main()
{
    int i, j, arr[5][5], n, m, sum=0;
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
 
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
        {
            sum += arr[i][j];
        }
        printf("the sum of column is %d\n", sum);
        sum = 0;
    }
    return 0;
}
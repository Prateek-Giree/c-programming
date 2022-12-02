// display the sum of diagonal elements of 3x3
#include <stdio.h>
int main()
{
    int i, j, arr[3][3], n, m, sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter matrix elements\n");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the elements of matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)

                sum += arr[i][j];
        }
    }
    printf("the sum of is %d\n", sum);
    return 0;
}
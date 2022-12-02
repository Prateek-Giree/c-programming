// display sum of two matrix
#include <stdio.h>
int main()
{
    int arr[5][5], ARR[5][5], row1, column1, row2, column2, i, j;
    printf("enter row and column of 1st matrix :");
    scanf("%d%d", &row1, &column1);
    printf("enter row and column of 2nd matrix :");
    scanf("%d%d", &row2, &column2);

    if (row1 == row2 && column1 == column2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                printf("enter 1st matrix elements :");
                scanf("%d", &arr[i][j]);
            }
        }
        printf("\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("enter 2nd matrix elements :");
                scanf("%d", &ARR[i][j]);
            }
        }
        printf("\n");
        printf("the sum of matrix is:\n");

        /*it doesnt matter wheather you write row1/column or
        row/column2 in iteration because both matrix are of same size*/
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                printf("%d\t", arr[i][j] + ARR[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix size should be of same order");
    }
    return 0;
}
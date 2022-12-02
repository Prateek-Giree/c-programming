// find the product of
#include <stdio.h>
int main()
{
    system("cls");
    int arr[5][5], ARR[5][5], i, j, k, prod[5][5], row1, column1, row2, column2;
    printf("enter row and column for 1st matrix :");
    scanf("%d%d", &row1, &column1);
    printf("enter row and column for 2nd matrix :");
    scanf("%d%d", &row2, &column2);

    if (column1 == row2)
    {
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                printf("enter 1st matrix elements: ");
                scanf("%d", &arr[i][j]);
            }
        } 
        printf("\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("enter 2nd matrix elements: ");
                scanf("%d", &ARR[i][j]);
            }
        }
        printf("\n");
        for (i = 0; i < row1; i++) // resulting matrix has row equal to 1st matrix
        {
            for (j = 0; j < column2; j++) // resulting matrix has column equal to 2nd matrix
            {
                prod[i][j] = 0;
                for (k = 0; k < row2; k++) // column1=row2 so it doesnt matter if you write column1 insetad of row2
                {
                    prod[i][j] += arr[i][k] * ARR[k][j];
                }
            }
        }
        printf("\nproduct is \n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%d\t", prod[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("column of 1st matrix must be equal to row of 2nd matrix to perform multiplication ");
    }

    return 0;
}

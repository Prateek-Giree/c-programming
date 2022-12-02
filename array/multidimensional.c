// read elements of any 2x3 matrix and display matrix and sum of all elements of matrix 
#include <stdio.h>
int main()
{
    int i, j, arr[2][3], s=0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter matrix elements\n");
            scanf("%d", &arr[i][j]);
        }
    }
    printf("the elements of matrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
            s += arr[i][j];
        }
        printf("\n");
    }
    printf("the sum of all elements of martix is %d", s);

    return 0;
}
// sort using bubble sort
#include <stdio.h>
int main()
{
    int arr[100], i, j, n, temp;
    printf("enter array size ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter array element");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("the elements in ascending order is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
// sort n elements in array in ascending order.
//example of selection sort 
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
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
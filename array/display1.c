// to display largest and smallest element in array
#include <stdio.h>
int main()
{
    int i, arr[100], n, large, small;
    printf("enter number of element in array");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter element in array");
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    large = arr[0];
    for (i = 0; i < n; i++)
    {
        if (small > arr[i])
            small = arr[i];
        if (large < arr[i])
            large = arr[i];
    }
    printf("the smallest number is %d ", small);
    printf("the largest number is %d ", large);

    return 0;
}
//sort in ascending and find first largest/smallest and second largest and smallest 
//exmaple of selection sort
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
    printf("first smallest number is %d and first largest number is %d\n\n", arr[0], arr[n - 1]);
    printf("second smallest number is %d and second largest number is %d", arr[1], arr[n - 2]);

    return 0;
}
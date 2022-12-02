// to search an element in Array
#include <stdio.h>
int main()
{
    int arr[100], i, n, search;
    printf("enter the size of an array \n\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter array element\n");
        scanf("%d", &arr[i]);
    }
    printf("enter an element to be search\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (search == arr[i])
        {
            printf("%d is found in %d index", search, i);
            break;
        }
    }
    if (i == n)
        printf("\n%d element is not found", search);
    return 0;
}
// to read n element in an array and display it
#include <stdio.h>
int main()
{
    int i, n, arr[100];
    printf("no of element in an array :");
    scanf("%d", &n);
    printf("enter an element ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Displaying the array elements \n");
    for (i = 0; i < n; i++)
        
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
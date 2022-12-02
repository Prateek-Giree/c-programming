// to print first n natural number
//using for loop
// #include<stdio.h>
// int main() {
// int i,n;
// printf("natural number upto ");
// scanf("%d",&n);
// for (i=1;i<=n;i++)
// {
//     printf("%d\n",i);
// }
// return 0;
// }

// using do while loop
// #include <stdio.h>
// int main()
// {
//     int i = 1, n;
//     printf("natural number upto ");
//     scanf("%d\n", &n);
//     do
//     {
//         printf("%d\n", i);
//         i++;
//     } while (i <= n);
//     return 0;
// }

//using while loop
#include<stdio.h>
int main() {
int n,i=1;
printf("natural number upto ");
scanf("%d",&n);
while (i<=n)
{
    printf("%d\n",i);
    i++;
}
return 0;
}
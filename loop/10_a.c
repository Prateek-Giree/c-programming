// check wheather the given number is prime or composite
// #include <stdio.h>
// int main()
// {
//     int i, num, check;
//     printf("enter a number");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             check++;
//         }
//     }
//     if (check == 2)
//     {
//         printf("%d is prime number ", num);
//     }
//     else
//     {
//         printf("%d is composite number ", num);
//     }

//     return 0;
// }

// using while loop
#include <stdio.h>
int main()
{
    int i = 1, num, check;
    while (i <= num)
    {
        if (num % i == 0)
            check++;
        i++;
    }
    if (check == 2)
    {
        printf("prime");
    }
    else
    {
        printf("composite");
    }

    return 0;
}
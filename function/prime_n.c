//to print first n prime number
#include<stdio.h>
int prime(int a);
int main() 
{
int n,a=2;
printf("prime upto where?");
scanf("%d",&n);

while(n)
{
    if (prime(a))
    {
        printf("%d ",a);
        n--;
    }
    a++;
}
}
int prime(int a)
{
    int i;
    for (i = 2; i < a; i++)
        {
            if (a % i == 0)
                return (0);
                return(1);
}
}
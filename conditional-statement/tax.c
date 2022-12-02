/*WAP to find the tax paid according to the list
rs25000-rs50000= 5%
rs50000-150000=15%
rs150000+ =25%*/
#include <stdio.h>
int main()
{
    int i;
    float t;
    printf("enter the income");
    scanf("%d", &i);
    if (i<=25000)
    {
        printf("you dont have to pay tax");
    }
    else if (i >= 25000 && i <= 50000)
    {
        t =0.05 * i;
        printf(" the tax amount to be paid is %f", t);
    }
    else if (i >= 50000 && i <= 150000)
    {
        t = 0.15 * i;
        printf(" the tax amount to be paid is %f", t);
    }
    else if (i >= 150000)
    {
        t = 0.25* i;
        printf(" the tax amount to be paid is %f", t);
    }
   

    return 0;
}

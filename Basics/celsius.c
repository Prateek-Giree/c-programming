// write a program to convert celsius to fahrenheitis
#include <stdio.h>
int main()
{
    int c;
    float f;
    printf("enter temp in celsius");
    scanf("%d", &c);
    f = c * 9 / 5 + 32;
    printf("temp in fahrenheitis %f", f);
    return 0;
}
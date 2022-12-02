// to print first n natural number in reverse order
#include<stdio.h>
int main() {
int a,i;
printf("natural number from ");
scanf("%d",&a);
for (i=a;i>0;i--)
{
    printf("%d\n",i);
}
return 0;
}
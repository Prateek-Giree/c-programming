// WAP to generate random number beth 1 to 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    srand(time(0)); //srand is use to initialize random number generator 
    
    num = rand() % 100 + 1; /* it generates number between 1 to 100 .If you dont add 1 then it will display num beth 1 to 99 and if
                            you dont do %100+1 then it will display a number beth 0 to infinity*/
    printf("the number is %d", num);
    return 0;
}
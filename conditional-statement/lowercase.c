// WAP to check wheather the entered character is lowercase or not
#include <stdio.h>
int main()
{
    char ch;
    printf(" enter a character");
    scanf("%c", &ch);
    if (ch >=97 && ch <=122)  //ASCII value of (a-z)=(97-122) and (A-Z)=(65-90)
        {
        printf("the character is lowercase");
    }
    else
    {
        printf("the character is  uppercase");
    }
    return 0;
}
// display a to z along with their ASCII value
#include <stdio.h>
int main()
{
    char ch;
    printf("the alphabets are\n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c=%d\n", ch, ch);
    }
    return 0;
}
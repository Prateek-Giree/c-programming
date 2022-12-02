// find the ascii value of a character
#include <stdio.h>

int main()
{

    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    printf("\n\nASCII value of %c = %d", c, c); //%d format specifier displays ascii value

    return 0;
}

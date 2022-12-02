#include <stdio.h>
// void goodmorning();            
// void goodafternoon();
// int main()
// {
//     printf("initializiling function\n");
//     goodmorning();
//     goodafternoon();
//     printf("\n function  finished ");
//     return 0;
// }

// void goodmorning()
// {
//     printf("good morning\n");
// }
// void goodafternoon()
// {
//     printf("good afternoon\n");
// }

//this is the easy way
void day();
int main()
{
    
    day();
    printf("\n function displayed");
    return 0;
}
void day()
{
    printf("good morning\n");
    printf("good afternoon\n");
    printf("good night\n");
}
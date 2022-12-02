// write a program to find wheather the student is passed or not also find the percentage and total of the passed students
#include <stdio.h>
int main()
{
    int math, social, eng, cfa, digital, t;
    float per;

    printf("enter the marks in maths ");

    scanf("%d", &math);

    printf("enter the marks in social ");

    scanf("%d", &social);

    printf("enter the marks in eng  ");

    scanf("%d", &eng);

    printf("enter the marks in cfa ");

    scanf("%d", &cfa);

    printf("enter the marks in digital ");

    scanf("%d", &digital);

    if (math >= 35 && social >= 35 && eng >= 35 && cfa >= 35 && digital >= 35)
    {
        t = math + social + eng + cfa + digital;

        per = (t / 5);

        printf("the total obtained marks is %d \n", t);

        printf("the percentage is %f \n", per);
    }
    else if (math < 35)
    {
        printf("you are failed  in maths");
    }
    else if (social < 35)
    {
        printf("you are failed  in social");
    }
    else if (eng < 35)
    {
        printf("you are failed  in eng");
    }
    else if (cfa < 35)
    {
        printf("you are failed  in cfa");
    }
    else if (digital < 35)
    {
        printf("you are failed in  digital");
    }

    return 0;
}
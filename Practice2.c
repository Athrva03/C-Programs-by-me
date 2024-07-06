#include <stdio.h>

int main()
{
    int a = 4;
    int b = 9;
    int c = 2;

    if (a > b && a > c)
    {
        printf("value of a is %d is greater!", a);
    }
    else if (b > a && b > c)
    {
        printf("value of b is %d is greater!", b);
    }
    else
    {
        printf("value of c is %d is greater!", c);
    } // End main
} // End Main
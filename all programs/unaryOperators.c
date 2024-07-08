#include <stdio.h>

void main()
{
    int num = 16;
    int result = (num % 2 == 0) ? printf("%d is Even number", num) : printf("%d is Odd Number", num);

    int age=0;
    printf("\nEnter your age");
    scanf("%d",&age);
    int result1 = (age >= 18) ? (age < 40)? printf("You are eligible for driving") : printf("above 40") : printf("You are not eligible for driving");
} // End main
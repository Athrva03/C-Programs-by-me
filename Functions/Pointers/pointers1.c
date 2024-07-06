#include <stdio.h>

int main()
{
    int x = 100;
    int y = 102;
    int *ptr = &x;
    int *ptr1 = &y;
    printf("%d\n", ptr);
    printf("%d",ptr1);
} // End main
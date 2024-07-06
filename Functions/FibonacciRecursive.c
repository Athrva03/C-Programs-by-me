#include <stdio.h>

int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    } // End if
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    } // End if-else
} // End fibonacci

int main()
{
    int num = 5;
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }//End for

} // End main
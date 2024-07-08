#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Even numbers between 0 to 100: ");

    for (int i = 0; i <= 100; i++)
    {

        if (i % 2 == 0)
        {
            printf("%d ", i);
        } // End If

    } // End for

    printf("\n\nOdd numbers between 0 to 100: ");

    for (int j = 0; j <= 100; j++)
    {

        if (j % 2 != 0)
        {
            printf("%d ", j);
        } // End if

    } // End for

} // End Main
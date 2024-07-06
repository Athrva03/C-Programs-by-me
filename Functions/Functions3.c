#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    } // End if

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }//End if
    } // End for
    return true;
}//End prime

int main()
{
    if (isPrime(11))
    {
        printf("\n It is prime");
    }
    else
    {
        printf("\n It is not prime");
    }

    return 0;

} // End Main
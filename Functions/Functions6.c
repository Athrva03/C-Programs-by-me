#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isArmstrong(int num)
{

    int reversedNum = 0;
    int originalNum = num;

    while (num > 0)
    {
        int digit = num % 10;
            reversedNum += pow(digit, 3);
        num /= 10;

    } // End while

    if (originalNum == reversedNum)
    {
        return true;
    } // End if

    return false;
} // End isArmstrong

int main()
{
    if (isArmstrong(181))
    {
        printf("It is a Armstrong Number");
    }
    else
    {
        printf("It is not a Armstrong Number");
    } // End if-else

} // End Main
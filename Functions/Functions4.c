#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0;

    while (num>0)
    {
            int digit = num%10;
            sum += digit;
            num /= 10;
    }//End while
    return sum;
}

int main()
{
    int num = 321;
    int result = sumOfDigits(321);
    printf("Sum of digits of %d is %d", num, result);

} // End Main
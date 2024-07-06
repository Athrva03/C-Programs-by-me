#include <stdio.h>
#include <stdbool.h>
int main()
{
    while (true)
    {

        int num, factorial = 1, square, EvenOdd, Prime;
        printf("\nEnter num1: ");
        scanf("%d", &num);

        printf("1.Factorial\n2.Square\n3.Even or Odd\n4.Prime or Not");

        int choice;
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for (int i = num; i >= 1; i--)
            {
                factorial *= i; // fact =fact*i;
            }//End for
            printf("%d", factorial);

            break;

        case 2:
            square = num * num;
            printf("%d", square);
            break;

        case 3:
            if (num % 2 == 0)
            {
                printf("Number is Even");
            }//End if
            else
            {
                printf("Number is Odd");
            }//End else
            break;

            bool isPrime = true;
        case 4:
            for (int i = 1; i <= num; i++)
            {

                if (i == 1)
                {
                    isPrime = false;
                }//End if

                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        isPrime = false;
                    }//End if
                }//End for
            }//End for
            if (isPrime)
            {
                printf("It is a Prime Number");
            }//End if
            else
            {
                printf("It is not a Prime Number");
            }//End else
            break;

        default:
            printf("Enter valid choice!");
            break;
        }//End Switch
    }//End While
} // End Main
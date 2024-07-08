#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter your score: ", num);
    scanf("%d", &num);

    if (num <= 100 && num>0)
    {

        if (num >= 90 && num <= 100)
        {
            printf("Your grade is 'A' ");
        }
        else if (num >= 80 && num <= 89)
        {
            printf("Your grade is 'B' ");
        }
        else if (num >= 70 && num <= 79)
        {
            printf("Your grade is 'C' ");
        }
        else if (num >= 60 && num <= 69)
        {
            printf("Your grade is 'D' ");
        }
        else
        {
            printf("You are failed");
        } // End If-Else Ladder
    }
    else
    {
        printf("Score should be in the range 0-100");
    } // End if-else

} // End Main
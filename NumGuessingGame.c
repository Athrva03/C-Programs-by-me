#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    int guess;

    srand(time(0));
    int randomnumber = (rand() % 50) + 1;

    int chances = 10;

    while (randomnumber != guess)
    {
        printf("\nEnter an integer: ");
        scanf("%d", &guess);
        if (guess < randomnumber)
        {
            printf("\nEnter a higher number.");
        }
        else if (guess > randomnumber)
        {
            printf("\nEnter a lower number");
        } // End if-else ladder
        else
        {
            printf("\nWow! You Guessed the number");
        }

        chances--; // chances = chances-1;

    } // End while

    getchar();
} // End main

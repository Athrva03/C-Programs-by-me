#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

    char str[50] = "car";

    char input[50];
    printf("Enter a String: ");
    scanf("%s", &input);

    bool result = strcmp(str, input);

    if (!result)
    {
        printf("It is Palindrome String.");
    }
    else
    {
        printf("It is not Palindrome String.");
    } // End if-else

    return 0;
} // End Main
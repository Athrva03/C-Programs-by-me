#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Prime Numbers between 1 to 50:\n");

    for (int i = 1; i <= 50; i++) {
        bool isPrime = true;

        if (i == 1) {
            isPrime = false; // 1 is not a prime number
        }//End if

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break; // No need to check further
            }//End if
        }//End for

        if (isPrime) {
            printf("%d ", i);
        }//End if
    }//End for

    printf("\n");
    return 0;
}//End main

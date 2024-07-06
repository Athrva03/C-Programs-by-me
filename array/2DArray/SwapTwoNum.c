#include <stdio.h>

int main()
{

    int a;
    printf("Enter first number: ");
    scanf("%d", &a);

    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

    int c;
    c = a;
    a = b;
    b = c;

    printf("After Swaping:\n");
    printf("First Number: %d\n", a);
    printf("Second Number: %d", b);

    return 0;

} // End Main

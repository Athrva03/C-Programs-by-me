#include <stdio.h>

int add(int a, int b)
{
    return a + b;
} // End Add

int findFact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    } // End for

    return fact;
} // End Factorial

void hello(){
    printf("\nHello Atherv");
}//End hello

int main()
{
    int a = add(3, 4);
    printf("Addition of is: %d", a);

    int factorial = findFact(5);
    printf("\nFactorial is: %d", factorial);

    hello();
    return 0;

} // End Main

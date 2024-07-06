#include <stdio.h>
#include <stdbool.h>

int add(int a, int b, int c)
{
    return a + b + c;
} // End add

float mul(float c, float d)
{
    return c * d;
} // End mul

bool evenOdd(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    } // End if-else
} // End EvenOdd

char printChar(char ch)
{
    return ch;
} // End char

double div(double x, double y)
{
    return x / y;
} // End div

void showArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }//End arr
}
int main()
{
    int additon = add(3, 4, 5);
    printf("%d", additon);

    float multiplication = mul(7.5, 8.5);
    printf("\n%.3f", multiplication);

    if (evenOdd(3))
    {
        printf("\nIt is even");
    }
    else
    {
        printf("\nIt is Odd");
    } // End if-else

    char character = printChar('A');
    printf("\nThe return character is %c", character);

    double division = div(0.2, 0.65);
    printf("\n%lf\n", division);

    int array[] = {1,2,3,4,5,5,6,6};
    int size = sizeof(array)/sizeof(array[0]);
    showArray(array,size);
    return 0;
} // End Main

    
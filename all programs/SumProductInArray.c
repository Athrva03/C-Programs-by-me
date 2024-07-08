#include <stdio.h>

int main()
{

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    } // End for

    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    } // End for

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    } // End for

    printf("\nSum of array elements = %d", sum);

    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    } // End for

    printf("\nProduct of array elements = %d", product);
} // End Main
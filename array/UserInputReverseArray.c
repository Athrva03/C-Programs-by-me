#include <stdio.h>

int main()
{

    int a;
    printf("Enter the size of array: ");
    scanf("%d", &a);

    int arr[a];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the array elements\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before reversing\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n5Array after reversing\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe value at index 0 is: %d", arr[0]);
}
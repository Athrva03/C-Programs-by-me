#include <stdio.h>

// Function to reverse elements of an array
void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array
void rotation(int arr[], int size, int d)
{
    d = d % size;
    reverse(arr, 0, size - 1);
    reverse(arr, 0, d - 1);
    reverse(arr, d, size - 1);
}

int main()
{
    int d = 3;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    rotation(arr, size, d);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

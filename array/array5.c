#include <stdio.h>
int *reverse(int arr[], int start, int end);
int main()
{
    int num;
    // printf("Enter the size of array: ");
    // scanf("%d", &num);

    int arr[] = {3, 4, 5, 6, 7, 88, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    int *reversedArray = reverse(arr, 0, n - 1);

    printf("after reversing & Before Ascending\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", reversedArray[i]);
    } // End for

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (reversedArray[j] > reversedArray[j + 1])
            {
                int temp = reversedArray[j];
                reversedArray[j] = reversedArray[j+1];
                
                reversedArray[j + 1] = temp;
            } // End if
        } // End for j
    } // End for i

    printf("\nAfter Ascending\n");
    printf("after reversing & After Ascending\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", reversedArray[i]);
    } // End for

    return 0;
} // End Main

int *reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } // End while
    return arr;
} // End reverse

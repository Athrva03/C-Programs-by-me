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
    }

    for (int i = 0; i < size; i++)
    {
        printf("\n%d-->%d", arr[i], i);
    }
    printf("\n");
    for (int i = size - 1;i>=0;i--){
        printf("\n%d-->%d", i, arr[i]);
    }

} // End Main
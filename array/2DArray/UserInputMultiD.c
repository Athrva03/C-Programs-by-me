#include <stdio.h>
int main()
{
    int row = 0;
    int col = 0;
    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter column: ");
    scanf("%d", &col);

    int arr[row][col];

    int size = sizeof(arr) / sizeof(arr[0]);
    int length = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("Enter array Elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &arr[i][j]);
        } // End for
    } // End for

    printf("Array Elements are: \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%d ", arr[i][j]);
        } // End for
        printf("\n");
    } // End for
    return 0;
} // End Main
#include <stdio.h>

int main()
{
    int row = 0;
    printf("Enter row: ");
    scanf("%d", &row);

    int col = 0;
    printf("Enter col: ");
    scanf("%d", &col);

    int arr[row][col];

    int size;
    int length;
    size = sizeof(arr) / sizeof(arr[0]);
    length = sizeof(arr[0]) / sizeof(arr[0][0]);

    printf("Enter array Elements: ");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Sum = ");
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("%d", sum);
} // End Main
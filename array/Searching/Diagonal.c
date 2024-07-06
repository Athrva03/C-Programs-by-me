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

    int size = row;
    int length = col;

    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum1=0;
    printf("Main Diagonal Numbers = ");
    for (int i = 0; i < size; i++)
    {
        if (i < length)
        {
            printf("%d ", arr[i][i]);
            sum1 += arr[i][i];

        }
    }
    printf("\nSum = %d", sum1);
    printf("\n");

    int sum2=0;
    printf("Anti-Diagonal Numbers = ");
    for (int i = 0; i < size; i++)
    {
        if (length - i - 1 >= 0)
        {
            printf("%d ", arr[i][length - i - 1]);
            sum2 += arr[i][length - i - 1];
        }
    }
    printf("\nSum = %d", sum2);
    printf("\n");

    return 0;
}

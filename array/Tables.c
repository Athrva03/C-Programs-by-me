#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int product;

    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <size; i++)
    {
        product = num * arr[i];
        printf("%d X %d = %d\n", num, arr[i], product);
    } // End for
} // End main
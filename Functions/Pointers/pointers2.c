#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};

    int *ptr = &arr[5];

    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     printf("\n");
    //     printf("%d", ptr);
    //     printf("\n");
    //     printf("%d", *ptr);
    //     printf("\n");

    //     ptr+=2;
    // } // End for
    
    // for (int i = sizeof(arr) / sizeof(arr[0]); i>=0 ; i--)
    // {
    //     printf("\n");
    //     printf("%d", ptr);
    //     printf("\n");
    //     printf("%d", *ptr);
    //     printf("\n");

    //    ptr--;
    // } // End for

    int *p1 = &arr[1];  // p1 points to the second element
    int *p2 = &arr[4];  // p2 points to the fifth element

    printf("Address stored in p1: %p\n", (void*)p1);
    printf("Address stored in p2: %p\n", (void*)p2);

    int diff = p2 - p1;  // Difference in elements
    printf("Number of elements between p1 and p2: %d\n", diff);
} // End main
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
        printf("\n%d", arr[i]);
    }
    
    int max =arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }//End if
    }//End for

    printf("\ngreater element in an array is: %d",max);

    int min =arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }//End if
    }//End for
    
    printf("\nSmaller element in an array is: %d",min);

} // End Main
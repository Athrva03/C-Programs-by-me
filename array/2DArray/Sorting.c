#include <stdio.h>

int main()
{
  int arr[] = {5, 12, 45, 8, 9, 24, 16};

  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Ascending Order: \n");

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      } // End if
    } // End for
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\nDescending Order: \n");

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      } // End if
    } // End for
  }

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

} // End Main
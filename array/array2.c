#include <stdio.h>

void main()
{

  int arr [] = {1,2,3,4,5,6};

  for(int i = sizeof(arr)/sizeof(arr[0])-1;i>=0;i--) {

    printf("%d ",arr[i]);
  }

} // End main
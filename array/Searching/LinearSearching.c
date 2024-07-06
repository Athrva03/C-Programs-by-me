#include <stdio.h>
#include<stdbool.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 4;
    bool flag = false;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==target){
            flag = true;
        }//End if
    }//End for

    if(flag){
        printf("%d is Found",target);
    }else{
        printf("%d not Found",target);
    }//End if-else
} // End main
#include<stdio.h>
int main(){
    int arr[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int size = sizeof(arr)/sizeof(arr[0]);
    int length= sizeof(arr[0])/sizeof(arr[0][0]);

    for(int i=0;i<size;i++){
        for(int j=0;j<length;j++){
            printf("%d ",arr[i][j]);
        }//End for j
        printf("\n");
    }//End for i

    // printf("%d ",arr[0][0]);
    // printf("%d ",arr[0][1]);
    // printf("%d ",arr[0][2]);
    // printf("%d ",arr[0][3]);
    // printf("%d ",arr[1][0]);
    // printf("%d ",arr[1][1]);
    // printf("%d ",arr[1][2]);
    // printf("%d ",arr[1][3]);
    // printf("%d ",arr[2][0]);
    // printf("%d ",arr[2][1]);
    // printf("%d ",arr[2][2]);
    // printf("%d ",arr[2][3]);
    return 0;
}//End main
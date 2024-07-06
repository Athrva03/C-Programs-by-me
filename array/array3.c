#include<stdio.h>

int main() {

int n;
printf("Enter the size of array: ");
scanf("%d",&n);

int arr[n];

printf("Enter the array elements of size %d: ",n);

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}//End for

printf("Array Elements are");
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    printf("%d ",arr[i]);
}//End for
return 0;
}//End Main
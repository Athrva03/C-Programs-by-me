#include<stdio.h>
#include<conio.h>

int main(){
    int num[6]={0}; 

    for(int i=0;i<5;i++){
        printf("inside i for");
        printf("%d\n",num[i]);
    }//End for
    for (int x = 0; x < 5; x++) {
        printf("Inside for loop");
        scanf("%d",&num[x]);
    }//End for
    
    for(int i=0;i<5;i++){
        printf("inside i for");
        printf("%d\n",num[i]);
    }//End for
    getchar();
    return 0;
}
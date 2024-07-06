#include<stdio.h>

void fibonacci(int num){
    int a=0, b=1, next = 0;
    for(int i=1;i<=num;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }//End for

}//End void

int main(){
    fibonacci(8);

}//End Main
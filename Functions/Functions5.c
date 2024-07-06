#include<stdio.h>
#include<stdbool.h>

int isPalindrome(int num){
    int reverseNum = 0;
    int originalNum = num;
    while(num > 0){
        int digit = num%10;
        reverseNum = reverseNum*10+digit;
        num /= 10; 
    }//End while

    if(originalNum!=reverseNum){
        return false;
    }//End if

    return true;
}//End isPalindrome

int main(){
    if(isPalindrome(411)){
        printf("It is Palindrome Number");
    }else{
        printf("It is not a Palindrome Number!");
    }//End If-Else
}//End main
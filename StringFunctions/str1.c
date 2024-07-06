#include<stdio.h>
#include<string.h>
#include <stdbool.h>
int main(){
    char str[] = "nikhil";
    printf("%s",str);

    // 1. FIND THE STRING LENGTH USING STRLEN()
    int length = strlen(str);
    printf("\n The length of %s is %d",str,length);

    // 2. MAKE COPY OF THE STRING USING STRCPY()
    char newcpy[50];
    strcpy(newcpy,str);


    printf("\n Copied String is %s",newcpy);
    
    // 3. CONCAT THE TWO STRING 
    char s1[] = "Nikhil";
    char s2[] = "Jadhav";

    strcat(s2,s1);
    printf("\nConcatinated String is: %s",s2);

    // 4. COMPARE THE TWO STRING

    char s3[] = "ATHERV";
    char s4[] = "DUDHE";

    bool result = strcmp(s3,s4);

    if(!result){
        printf("\nString are equal");
    }else{
        printf("\nString is not equal");
    }//End if-else

    // 5. FIND THE FIRST OCCURANCE OF A CHARACTER USING STRCHR()
    char string [] = "Nikhil";
    char *ptr = strchr(string,'i');

    if(ptr){
        printf("Character is: %ld\n",ptr-string);
    }else{
        printf("Not found!");
    }//End if-else

    // FIND THE SUBSTRING FROM STRING
    char name[] = "nikhil";
    char *ptr1 = strstr(name,"h");

    if(ptr1){
        printf("\n\n\n\n\n%s",ptr1);
    }else{
        printf("Not Found");
    }//End if-else
    return 0;
}//End main
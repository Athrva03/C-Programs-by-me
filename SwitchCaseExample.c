#include <stdio.h>
int main()
{
    int count=11;
    while (count-- && count>0)
    {
        int num=0;
        printf("Enter the number between 1 to 10: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            
        case 3:
            printf("3\n");
            
        case 4:
            printf("4\n");
            break;
        case 5:
            printf("5\n");
            break;
        case 6:
            printf("6\n");
            break;
        case 7:
            printf("7\n");
            break;
        case 8:
            printf("8\n");
            break;
        case 9:
            printf("9\n");
            break;
        case 10:
            printf("10\n");
            break;
        default:
            printf("Enter valid choice!\n");
            break;
        } // End switch
    } // End while
} // End main
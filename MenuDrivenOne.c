#include <stdio.h>
#include <stdbool.h>
int main()
{
    while (true)
    {

        int num1, num2,sum,sub,product,division,remainder;
        printf("\nEnter num1: ");
        scanf("%d", &num1);
        printf("\nEnter num2: ");
        scanf("%d", &num2);


        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Module");

        int choice;
        printf("Enter the choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                sum= num1+num2;
                printf("%d",sum);
                break;
            case 2:
                sub= num1-num2;
                printf("%d",sub);
                break;
            case 3:
                product= num1*num2;
                printf("%d",product);
                break;
            case 4:
                division= num1/num2;
                printf("%d",division);
                break;
            case 5:
                remainder= num1%num2;
                printf("%d",remainder);
                break;
            default:
                printf("Enter valid choice!");
                break;
        }//End switch
    } // End while
} // End main
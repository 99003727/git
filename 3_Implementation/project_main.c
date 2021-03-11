
#include<stdio.h>
#include<stdlib.h>
#include <calculator_operations.h>
#include <conversion.h>
int main()
{
int highlevel;
int lowlevel1;
int choice1;
int choice3;
printf("What do you want to do?\n1>Arithmetic\n2>Conversion\n3>Algebric\n4>Inbuild\n");

scanf("%d", &highlevel);

switch(highlevel)
{
    case 1:
    {
    printf("What do you want to do?\n Addition subtraction multlipication");
    scanf("%d", &choice1);
    switch(lowlevel1)
    {
        case 1:
        {   
             int operand1, operand2;
            printf("Enter first number ");
            scanf("%d", &operand1);
            printf("Enter second number ");
            scanf("%d", &operand2);
            printf("Sum is: %d", operand1+operand2);
            break;
        }
        case 2:
        {
            int operand1, operand2;
             printf("Enter first number ");
            scanf("%d", &operand1);
            printf("Enter second number ");
            scanf("%d", &operand2);
            printf("Difference is: %d",substraction(operand1,operand2));
            break;
        }
        case 3:
        {
            double operand1, operand2;
            printf("Enter first number ");
            scanf("%lf", &operand2);
            printf("Enter second number ");
            scanf("%lf", &operand2);
            printf("Product is: %.3lf",multiplication(operand1,operand2));
            break;
        }
        case 4:
        {
            double operand1, operand2;
            printf("Enter first number:");
            scanf("%lf", &operand1);
            printf("Enter second number:");
            scanf("%lf", &operand2);
            if(operand2>0)
            {
            printf("Result is: %.5lf",division(operand1,operand2));
            }
            else
            {
                printf("Cannot Divide by zero");
            }
             break;
        }
        case 5:
            {
            float operand1,operand2;
            printf ("enter the number1:");
            scanf("%f",&operand1);
            printf("enter the operand2:");
            scanf("%f",&operand2);
            printf("modulous is %.2f",modulous(operand1,operand2));
            break;
            }
        default:
            {
            printf("invalid operation");
            }
            break;
    }
    }
    
case 2:
{
    //char a[20]="";
        float degree,rad;
        printf("what do you want convert?give the choice as 1Degree. or 2.Radian\n");
        scanf("%d",&choice3);
        switch(choice3)
        {
        /**char b;
        scanf("%c",&b);
        if(b=='D')**/
            case 1:
            {
                printf("give the data to convert from degrees to radian\n");
                scanf("%f",&degree);
                printf("%f", Radian(degree));
                break;
            }
            case 2:
            {
                printf("give the data to convert from radian to degrees\n");
                scanf("%f",&rad);
                printf("%f",Degree(rad));
                break;//asdasd
            }
            default : printf("it should not come here");
        }
    }


    




}
}

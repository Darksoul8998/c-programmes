#include <stdio.h>
int main()
{
    int choice;
    float num1,num2,result;
    printf("enter first number:");
    scanf("%f",&num1);
    printf("enter second number:");
    scanf("%f",&num2);  
    do
    {
        printf("1.addition\n");
        printf("2.subtraction\n");
        printf("3.multiplication\n");
        printf("4.division\n");
        printf("5.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                result=num1+num2;
                printf("result=%.2f\n",result);
                break;
            case 2:
                result=num1-num2;
                printf("result=%.2f\n",result);
                break;
            case 3:
                result=num1*num2;
                printf("result=%.2f\n",result);
                break;
            case 4:
                if(num2!=0)
                {
                    result=num1/num2;
                    printf("result=%.2f\n",result);
                }
                else
                    printf("division by zero is not possible\n");
                break;
            case 5:
                printf("exit\n");
                break;
            default:
                printf("invalid choice\n");
        }
    }
    while(choice!=5);
    return 0;
}
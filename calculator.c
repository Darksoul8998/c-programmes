#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    printf("choose operation:\n");
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("addition : %d\n", a + b);
        break;
        case 2:
        printf("subtraction : %d\n", a - b);
        break;
        case 3:
        printf("multiplication : %d\n", a * b);
        break;
        case 4:
        if (b != 0)
        printf("division : %d\n", b / a);
        else
        printf("error: division by zero is not allowed\n");
        break;
        default:
        printf("invalid choice\n");
    }
}
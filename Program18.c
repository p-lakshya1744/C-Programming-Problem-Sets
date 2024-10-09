// Program to simulate a calculator using switch statement
#include <stdio.h>
int main()
{
    int input;
    float a, b, result;
    printf("Calculator");
    printf("\nEnter 1 for addition:");
    printf("\nEnter 2 for subtraction:");
    printf("\nEnter 3 for multiplication;");
    printf("\nEnter 4 for division:");
    scanf("%d",&input);
    printf("\nEnter the first number:");
    scanf("%f",&a);
    printf("\nEnter the second number:");
    scanf("%f",&b);
    switch(input)
    {
        case 1: result = a + b;
        printf("\nThe addition of the numbers is %f",result);
        break;

        case 2: result = a - b;
        printf("\nThe difference of the numbers is %f",result);
        break;

        case 3: result = a * b;
        printf("\nThe product of the numbers is %f",result);
        break;

        case 4: result = a / b;
        printf("\nThe quotient of the numbers is %f",result);
        break;

        default: printf("\nInvalid input");
    }
    return 0;
}
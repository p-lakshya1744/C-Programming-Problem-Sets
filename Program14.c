// Program to find the greatest of three numbers using ternary operator
#include <stdio.h>
int main()
{
    int a, b, c, result;
    printf("Enter the first number:",a);
    scanf("%d",&a);
    printf("Enter the second number:",b);
    scanf("%d",&b);
    printf("Enter the third number:",c);
    scanf("%d",&c);
    result = a>b?(a>c?a:c):(b>c?b:c);
    printf("The greatest number is %d",result);
    return 0;
}
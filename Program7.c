//Program to find the greatest of three numbers
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a > b && a >c)
    printf("The greatest number is %d",a);
    else if(b >c && b > a)
    printf("The greatest number is %d",b);
    else
    printf("The greatest number is %d",c);
return 0;
}
// Program that checks whether the two numbers entered by the user are equal or not
#include <stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the First Number:");
    scanf("%d",&a);
    printf("\nEnter the Second Number");
    scanf("%d",&b);
    if(a == b)
    printf("The two numbers entered by the user are equal.");
    else
    printf("The two numbers entered by the user are not equal.");
return 0;
}
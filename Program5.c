// Program that swaps values of two variables using a third variable
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("\nEnter the value of first variable:");
    scanf("%d",&a);
    printf("\nEnter the value of second variable:");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping:");
    printf("\nThe first variable becomes %d",a);
    printf("\nThe second variable becomes %d",b);
    return 0;
}
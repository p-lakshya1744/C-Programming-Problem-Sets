// Program that finds whether the given number is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number that is to be checked:");
    scanf("%d",&num);
    if(num % 2 == 0)
    printf("The entered number is even.");
    else
    printf("The entered number is odd.");
return 0;
}
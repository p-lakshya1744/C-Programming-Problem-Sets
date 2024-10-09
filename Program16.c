// Program to check whether a year is leap year or not
#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            printf("It is a leap year.");
            else
            printf("It is not a leap year.");
        }
        else
        printf("It is a leap year.");
    }
    else
    printf("It is not a leap year.");
}
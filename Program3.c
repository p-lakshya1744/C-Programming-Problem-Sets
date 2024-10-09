// Program that calculates simple interest and compound interest when principal, rate of interest and time are entered through keyboard
#include <stdio.h>
#include <math.h>
int main()
{
    int principal;
    float rate, time, amount, si, ci;
    printf("\nEnter the Principal (in Rupees):");
    scanf("%d",&principal);
    printf("\nEnter the Rate of Interest (in percentage):");
    scanf("%f",&rate);
    printf("\nEnter the Time (in years):");
    scanf("%f",&time);
    si = (principal * rate * time)/100;
    amount = principal * pow((1 + (rate/100)),time);
    ci = amount - principal;
    printf("\nThe Simple Interest (SI) is %f",si);
    printf("\nThe Compound Interest (CI) is %f",ci);
    return 0;
}
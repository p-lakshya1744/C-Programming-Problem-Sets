// Program that will read a positive 5-digit number from the keyboard and print in the reverse order
#include <stdio.h>
int main()
{
    int num, d1, d2, d3, d4, d5, rev;
    printf("Enter a 5-digit number:",num);
    scanf("%d",&num);
    d1 = num%10;
    num = num/10;
    d2 = num%10;
    num = num/10;
    d3 = num%10;
    num = num/10;
    d4 = num%10;
    num = num/10;
    d5 = num%10;
    rev = d1*10000 + d2*1000 + d3*100 + d4*10 + d5;
    printf("The reversed number is %d",rev);
    return 0;
}
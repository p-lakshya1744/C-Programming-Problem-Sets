// Program to determine the type of a triangle
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {
    if(a==b==c)
    printf("It is an equilateral triangle.");
    else if(a==b || b==c || a==c)
    printf("It is an isosceles triangle.");
    else 
    printf("It is a scalene triangle.");
    }
    else
    printf("Invalid Triangle.");
return 0;
}
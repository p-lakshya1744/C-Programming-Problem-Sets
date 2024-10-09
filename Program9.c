// Program to calculate area and circumference of a circle whose radius is entered through the keyboard
#include <stdio.h>
#define pi 3.14159
int main()
{
    float r, area, circumference;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    area = pi * r * r;
    circumference = 2 * pi * r;
    printf("\nThe area of the circle is %f",area);
    printf("\nThe circumference of the circle is %f",circumference);
    return 0;
}
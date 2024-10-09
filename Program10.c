// Program to find out the roots of a quadratic equation
#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    float D, root1, root2;
    printf("Enter the value of a for the quadratic equation(of type ax^2 + bx + c):");
    scanf("%d",&a);
    printf("Enter the value of b for the quadratic equation(of type ax^2 + bx + c):");
    scanf("%d",&b);
    printf("Enter the value of c for the quadratic equation(of type ax^2 + bx + c):");
    scanf("%d",&c);
    D = b*b - 4*a*c;
    if(D>0){
        root1 = (-b + sqrt(D))/(2*a);
        root2 = (-b - sqrt(D))/(2*a);
        printf("\nThe roots of the equation are real and distinct.");
        printf("\nThe roots are %f and %f",root1,root2);
    }
    else if(D=0){
        root1 = root2 = -b/(2*a);
        printf("\nThe roots are equal.");
        printf("\n The roots are %f and %f",root1,root2);
    }
    else
    printf("The roots are imaginary");
}
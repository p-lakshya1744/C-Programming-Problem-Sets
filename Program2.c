// Program that accepts the marks of 5 subjects and find the sum and percentage marks obtained by the student
#include <stdio.h>
int main()
{
    int a,b,c,d,e, sum;
    float percentage;

    printf("\nEnter the marks of First Subject (say English):");
    scanf("%d",&a);
    printf("\nEnter the marks of Second Subject (say Hindi):");
    scanf("%d",&b);
    printf("\nEnter the marks of Third Subject (say Mathematics):");
    scanf("%d",&c);
    printf("\nEnter the marks of Fourth Subject (say Science):");
    scanf("%d",&d);
    printf("\nEnter the marks of Fifth Subject (say Social Science):");
    scanf("%d",&e);

    sum = a + b + c + d + e;
    percentage = sum/5;
    
    printf("\nThe sum marks obtained by student is %d",sum);
    printf("\nThe percentage marks obtained by student is %f",percentage);
    return 0;
}
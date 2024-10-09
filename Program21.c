// Program to find maximum and minimum number in an array
#include <stdio.h>
int main()
{
    int a[5], i;
    printf("Enter the elements of array:");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0], min=a[0];
    for(i=0 ; i<5 ; i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("\nThe maximum number in array is %d",max);
    printf("\nThe minimum number in array is %d",min);
    return 0;
}
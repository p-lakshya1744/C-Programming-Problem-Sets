// Program to count the even and odd numbers in an array
#include <stdio.h>
int main()
{
    int a[10], i;
    printf("Enter the elements of array:");
    for(i=0;  i<10 ; i++)
    {
        scanf("%d",&a[i]);
    }
    int even=0, odd=0;
    for(i=0 ; i<10 ; i++)
    {
        if(a[i]%2 == 0)
        even++;
        else
        odd++;
    }
    printf("\nThe no. of odd elements are %d",odd);
    printf("\nThe no. of even elements are %d",even);
    return 0;
}
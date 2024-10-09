// Program to reverse the array
#include <stdio.h>
int main()
{
    int arr[10], i, j, temp;
    printf("Enter the elements of array:");
    for(i=0 ; i<10 ; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0, j=9 ; i<j ; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed Array:\n");
    for(i=0 ; i<10 ; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

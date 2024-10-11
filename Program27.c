// Program to find the sum of diagonal elements of a matrix

#include <stdio.h>
int main()
{
    int mat[3][3], i, j;
    int sum = 0;
    
    printf("Enter the elements of matrix:");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        sum = sum + mat[i][i]
    }

    print("The sum of main diagonal elements is %d", sum)
    return 0;
}
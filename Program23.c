// Program to print the sum and difference of two matrices

#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], sumMat[3][3], diffMat[3][3], i, j;
    
    printf("Enter the elements of first matrix:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            sumMat[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            diffMat[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    printf("The sum of two matrices is:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", sumMat[i][j]);
        }
        printf("\n");
    }

    printf("The difference of two matrices is:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", diffMat[i][j]);
        }
        printf("\n");
    }
}
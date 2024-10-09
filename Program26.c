// Program to find the product of two matrices

#include <stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], productMat[3][3], i, j, k;

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
            productMat[i][j]=0;
            for(k=0 ; k<3 ; k++)
            {
                productMat[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("The product of matrices is:\n");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", productMat[i][j]);
        }
        printf("\n");
    }
}
// Program to find the transpose of a matrix

#include <stdio.h>
int main()
{
    int mat[3][3], transposeMat[3][3], i, j;

    printf("Enter the elements of the matrix:");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            transposeMat[i][j] = mat[j][i];
        }
    }

    printf("The transpose of matrix is:");

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("%d\t", transposeMat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
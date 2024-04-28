/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void maMulti(int **a,int **b,int **result,int rows_a,int cols_a,int rows_b,int cols_b)
{
    if (cols_a != rows_b) 
    {
        printf("Matrix multiplication not possible.\n");
        return;
    }
    for(int i=0;i<rows_a;i++)
    {
        for(int j=0;j<cols_b;j++)
        {
            result[i][j]=0;
        }
    }
    for(int i=0;i<rows_a;i++)
    {
        for(int j=0;j<cols_b;j++)
        {
            for(int k=0;k<cols_a;k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}

int main()
{
    int rows_a,cols_a,rows_b,cols_b;
    printf("Enter the number of rows and columns for matrix A");
    scanf("%d %d",&rows_a,&cols_a);
    printf("Enter the number of rows and columns for matrix B");
    scanf("%d %d",&rows_b,&cols_b);
    if (cols_a != rows_b) 
    {
        printf("Matrix multiplication not possible\n");
        return 1;
    }
    int **matrixA=(int **)calloc(rows_a,sizeof(int *));
    int **matrixB=(int **)calloc(rows_b,sizeof(int *));
    int **result=(int **)calloc(rows_a,sizeof(int *));
    for(int i=0;i<rows_a;i++) 
    {
        matrixA[i]=(int *)calloc(cols_a,sizeof(int));
        result[i]=(int *)calloc(cols_b,sizeof(int));
    }
    for (int i=0;i<rows_b;i++)
    {
        matrixB[i]=(int *)calloc(cols_b,sizeof(int));
    }
    printf("Enter elements of matrix A\n");
    for(int i=0;i<rows_a;i++) 
    {
        for(int j=0;j<cols_a;j++) 
        {
            scanf("%d",&matrixA[i][j]);
        }
    }
    printf("Enter elements of matrix B\n");
    for(int i=0;i<rows_b;i++) 
    {
        for(int j=0;j<cols_b;j++)
        {
            scanf("%d",&matrixB[i][j]);
        }
    }
    maMulti(matrixA,matrixB,result,rows_a,cols_a,rows_b,cols_b);
    printf("Result of matrix multiplication\n");
    for(int i=0;i<rows_a;i++) 
    {
        for(int j=0;j<cols_b;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

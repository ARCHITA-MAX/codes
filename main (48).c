/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() 
{
    int n,a[3][3],i,j,sum=0;
    // Input the size of the square matrix
    scanf("%d", &n);
    // Input elements into the matrix
    printf("the given array is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe elements being summed of the lower triangular matrix are: ");
    for(i=0;i<n;i++) 
    {
        for(j=0;j<n;j++) 
        {
            if(i>j)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nThe sum of the lower triangular matrix elements are: %d",sum);
    return 0;
}


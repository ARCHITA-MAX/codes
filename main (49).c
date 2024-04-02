/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n,i,j,a[20][20],temp=0;
    scanf("%d",&n);
    printf("the given array is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the maximum element of each row of matrix are: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[i][j]>a[i][j+1])
            {
                temp=a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j]=temp;
            }
        }
        printf("%d ",a[i][n-1]);
    }
    return 0;
}

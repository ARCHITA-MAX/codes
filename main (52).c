/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n,m,r,sum=0;
    printf("enter the value of n and m");
    scanf("%d%d",&n,&m);
    printf("enter the row");
    scanf("%d",&r);
    int a[n][m];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<m;j++)
    {
        sum=sum+a[r-1][j];
    }
    printf("%d",sum);
    return 0;
}

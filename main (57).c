/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int n,m,sumlow,sumhigh;
    printf("enter the value of  n and m");
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i>j)
            sumlow=sumlow+a[i][j];
            if(i<j)
            sumhigh=sumhigh+a[i][j];
        }
    }
    if(sumlow<sumhigh)
    printf("sum of upper triangle is more than lower");
    else
    printf("sum of lower triangle is more than upper");
    return 0;
}
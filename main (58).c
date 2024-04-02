/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int n,m,sumabove,sumtotal,sumbelow;
    printf("enter the value of n and m");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("enter the elements of an array");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        sumabove=sumabove+a[i][i+1];
    }
    for(int i=1;i<m;i++)
    {
        sumbelow=sumbelow+a[i][i-1];
    }
    sumtotal=sumabove+sumbelow;
    printf("%d",sumtotal);
    return 0;
}
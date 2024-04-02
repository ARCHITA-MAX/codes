/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n,m,c,temp=0;
    printf("enter the value of n and m");
    scanf("%d%d",&n,&m);
    printf("enter the column");
    scanf("%d",&c);
    int a[n][m];
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[i][c-1]>a[j][c-1])
            {
                temp=a[i][c-1];
                a[i][c-1]=a[j][c-1];
                a[j][c-1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
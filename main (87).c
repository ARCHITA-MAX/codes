/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*p;
    printf("enter the value of n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL)
    printf("memory allocation failed");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    printf("sorted array");
    for(int i=0;i<n;i++)
    printf("%d",p[i]);
    return 0;
}
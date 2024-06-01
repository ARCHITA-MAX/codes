/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i,sum=0;
    printf("enter th evalue of  n");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("sum=%d",sum);
    free(p);
    return 0;
}
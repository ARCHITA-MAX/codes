/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0,*p,s,sum1=0;
    printf("enter the value of n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    printf("memory allocation failed");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
    for(int i=0;i<n;i++)
    {
        if(p[i]>=0 && p[i]<=9)
        sum=sum+p[i];
        else
        {
            s=p[i];
            while(s!=0)
            {
                sum1=sum1+s%10;
                s=s/10;
            }
        }
    }
    printf("sum  of single digit elements=%d",sum);
    printf("sum of multi digit elements=%d",sum1);
    return 0;
}
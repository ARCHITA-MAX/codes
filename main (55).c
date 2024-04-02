/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
void maxmin(int *p,int n,int *max,int *min)
{
    *max=*p;
    *min=*p;
    for(int i=0;i<n;i++)
    {
        if(*min>*(p+i))
        *min=*(p+i);
        if(*max<*(p+i))
        *max=*(p+i);
    }
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n],max,min;
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    maxmin(a,n,&max,&min);
    printf("%d %d",max,min);
    return 0;
}
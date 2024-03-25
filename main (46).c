/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int Unique(int a[],int n);
int main()
{
    int n,i,a[100];
    printf("\nPrint all unique elements of an array:\n");
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d elements in the array:\n",n);
    for (i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a[i]);
    }
    Unique(a,n);
    return 0;
}
    int Unique(int a[],int n)
    {
        int i,j,c=0;
        printf("\nThe unique elements found in the array are:");
        for(i=0;i<n;i++)
        {   
            c=0;  
            for(j=0;j<n+1;j++)
            {   
                if(i!=j)
                {   
                    if(a[i]==a[j])
                    c++;
                }
            }
            if(c==0)
            printf("%d ",a[i]);  
        }
    printf("\n");
    return 0;  
    }


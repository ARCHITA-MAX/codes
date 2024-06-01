/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n,i,idx;
    printf("\t\t*****INPUT*****\n");
    printf("Enter the value of n ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the index from where to reverse the array ");
    scanf("%d",&idx);
    for(i=idx;i<(n+idx)/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1+idx];
        arr[n-i-1+idx]=temp;
    }
    printf("\t\t*****OUTPUT*****\n");
    printf("Reversed array\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

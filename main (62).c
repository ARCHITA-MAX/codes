/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr=(int *)malloc(n * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *count=(int *)malloc(n * sizeof(int));
    if(count == NULL)
    {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }
    int duplicates=0;
    for(int i=0;i<n;i++)
    {
        if(++count[arr[i]] > 1)
        {
            duplicates=1;
            break;
        }
    }
    if(duplicates)
    printf("Duplicate elements found in the array.\n");
    else 
    printf("No duplicate elements found in the array.\n");
    free(arr);
    free(count);
    return 0;
}
 
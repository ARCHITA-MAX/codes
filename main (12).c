/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void PickOutZeros(int arr, int n) 
{
    int tmp, left = 0, right = n-1;
    while (right > left) 
    {
        while (arr[left] != 0)
            left++;
        while (arr[rgt] == 0)
            right--;
        if (left < right)
        {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
        }
    }
}

int main()
{
    int arr[20]
    int n;
    int i;
    pritnf("enter the value of n");
    scanf("%d",&n);
    printf("enter The array");
    for (i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    } 
    PickOutZeros(arr, n);
    printf("The new array is");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr1[i]);
    }

    return 0;
}

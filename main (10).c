/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void check(int arr[], int n, int s)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr1[i] + arr1[j] == s)
            {
                printf("Pair of elements can make the given sum by the value of index %d and %d", i, j);
                return;
            }
        }
    }
    printf("No pair can make the given sum.");
}
int main()
{
    int arr[20]
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d  ", arr[i]);
    }
    check(arr, n, s);
    return 0;
}

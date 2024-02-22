/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int pick(int arr, int num) 
{
    int i, sum = 0, n = num + 1;
    for (i = 0; i <n; i++) 
    {
        sum = sum + arr1[i];
    }
    return (n * (n + 1)) / 2 - sum;
}
int main() 
{
    int n;
    int arr[20];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of array ");
    for (i = 0; i <n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("The missing number=%d", pick(arr,n));
    return 0;
}

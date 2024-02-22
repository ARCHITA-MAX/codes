/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************
#include <stdio.h>
int main() 
{
    int arr1[20][20], i, j, n;
    printf("Input the size of the square matrix ");
    scanf("%d", &n);
    printf("Input elements in the matrix :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) 
        {
            if (i <= j) 
                printf("% 4d", arr1[i][j]); 
            else 
                printf("% 4d", 0); 
        }
    }
    return 0;
}
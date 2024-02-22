/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int arr[20][20], i, j, n;
    printf("Input the value of n");
    scanf("%d", &n);
    printf("Input elements in the matrix");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++) 
        {
            if (i >= j)
            {
                printf("%d", arr[i][j]); 
            }
            else 
            {
                printf("%d", 0); 
            }
        }
    }
    return 0;
}

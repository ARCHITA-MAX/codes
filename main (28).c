/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,m;
    printf("enter the value of n and m");
    scanf("%d%d",&n,&m);
    int a1[n][m],a2[n][m];
    printf("enter the elements of array1");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a1[n][m]);
        }
    }
    printf("enter the elements of array2");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a2[n][m]);
        }
    }
    int a3[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
        }
    }
    printf("elements of third array");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",a3[i][j]);
        }
    }
    return 0;
}

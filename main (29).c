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
    printf("ente rthe value of n and m");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("enter the elements of array");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    float sum=0,avg=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
    }
    avg=sum/(n*m);
    printf("%f%f",sum,avg);
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fact(int);
void main()
{
    int sum;
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    sum=fact(i)/i;
    }
    printf("The sum of the series is=%n",sum);
}
int fact(int n)
    {
        int f=1;
        for(int i=0;i<n;i++)
        {
            f =f*i;
        }
    return f;
    }


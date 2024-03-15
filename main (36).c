/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,element,c=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter thr elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&element);
        if(element%7==0)
        {
        a[c]=element;
        c++;
        }
    }
    for(int i=0;i<c;i++)
    printf("%d",a[i]);
    return 0;
}

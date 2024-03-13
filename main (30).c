/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    int n[a][b];
    int sum=0,diff=0;
    printf("enter the elements");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    int largest=n[0][0],smallest=n[0][0];
    for(int i=1;i<a;i++)
    {
        for(int j=1;j<b;j++)
        {
            if(n[i][j]>largest)
            largest=n[i][j];
            else
            smallest=n[i][j];
        }
    }
    sum=largest+smallest;
    diff=largest-smallest;
    printf("sum=%d",sum);
    printf("difference=%d",diff);
    return 0;
}

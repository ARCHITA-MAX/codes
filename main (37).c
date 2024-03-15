/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int count(int n)
{
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int Prime(int);
int main()
{
    int n1,prime;
    printf(" Input a positive number : ");
    scanf("%d",&n);
    prime = Prime(n);
   if(prime==1)
        printf(" The number %d is a prime number",n1);
   else
      printf(" The number %d is not a prime number",n1);
   return 0;
}
int Prime(int n)
{
    int i=2;
    while(i<=n/2)
    {
         if(n%i==0)
             return 0;
         else
             i++;
    }
    return 1;
}
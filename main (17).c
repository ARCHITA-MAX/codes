/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void swap(int ,int);
int main()
{

    int n1,n2;
    printf("Input 1st number");
    scanf("%d",&n1);
    printf("Input 2nd number");
    scanf("%d",&n2);	
    swap(&n1,&n2);
    printf("After swapping: n1 = %d, n2 = %d",n1,n2);
    return 0;
}
void swap(int p,int q)
{
    int tmp;
    tmp = p; 
    p=q;    
    q=tmp;   
}



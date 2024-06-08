/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int l,r,count=0,num=0;
    printf("enter the lower and upper limit");
    scanf("%d%d",&l,&r);
    for(int i=l;i<=r;i++)
    {
        num=i%10;
        if(num==2 || num==3 || num==9)
        count++;
    }
    printf("count=%d",count);
    return 0;
}
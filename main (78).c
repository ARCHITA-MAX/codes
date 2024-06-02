/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    FILE *fp,*fo,*fe;
    int n,i,num,ce=0,co=0;
    printf("enter the value of n");
    scanf("%d",&n);
    fp=fopen("hello.txt","w");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);
    fp=fopen("hello.txt","r");
    fe=fopen("even.txt","w");
    fo=fopen("odd.txt","w");
    for(int i=0;i<n;i++)
    {
        num=getw(fp);
        if(num%2==0)
        {
            putw(num,fe);
            ce++;
        }
        else
        {
            putw(num,fo);
            co++;
        }
    }
    fclose(fp);
    fclose(fe);
    fclose(fo);
    fe=fopen("even.txt","r");
    for(int i=0;i<ce;i++)
    {
        num=getw(fe);
        printf("%d",num);
    }
    fclose(fe);
    fo=fopen("odd.txt","r");
    for(int i=0;i<co;i++)
    {
        num=getw(fo);
        printf("%d",num);
    }
    fclose(fo);
    return 0;
}
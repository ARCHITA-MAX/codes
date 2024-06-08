/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int num=0,sum=0,a=0;
    fp1=fopen("input.txt","r");
    if(fp1==NULL)
    {
        printf("file error");
        exit(1);
    }
    fp2=fopen("output.txt","w");
    if(fp2==NULL)
    {
        printf("file error");
        exit(1);
    }
    while(fscanf(fp1,"%d",&num)!=EOF)
    {
        sum=0;
        while(num>0)
        {
            a=num%10;
            sum=sum+a;
            num=num/10;
        }
        fprintf(fp2,"%d",sum);
    }
    fclose(fp1);
    fclose(fp2);
}
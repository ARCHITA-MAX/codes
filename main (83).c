/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int sum=0,c;
    fp1=fopen("hello.txt","r");
    fp2=fopen("sum.txt","w");
    if(fp1==NULL)
    {
        printf("file error");
        exit(1);
    }
    if(fp2==NULL)
    {
        printf("file error");
        exit(1);
    }
    while(fscanf(fp1,"%d",&c)!=EOF)
    sum=sum+c;
    fprintf(fp2,"sum=%d",sum);
    fclose(fp1);
    fclose(fp2);
    fp1=fopen("hello.txt","r");
    while((c=fgetc(fp1))!=EOF)
    {
        putchar(c);
    }
    return 0;
}
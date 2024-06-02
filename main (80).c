/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1=fopen("hello.txt","r");
    if(fp1==NULL)
    {
        printf("file error");
        exit(1);
    }
    fp2=fopen("replace.txt","w");
    if(fp2==NULL)
    {
        printf("file error");
        exit(1);
    }
    while((c=getc(fp1))!=EOF)
    {
        if(!(c>='a'&& c<='z' || c>='A' && c<='Z' || c>=0 && c<=9))
        c='$';
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("replace.txt","r");
    while(!feof(fp2))
    {
        c=fgetc(fp2);
        printf("%c",c);
    }
    fclose(fp2);
    return 0;
}
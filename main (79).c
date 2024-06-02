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
    printf("file error");
    fp2=fopen("case.txt","w");
    if(fp2==NULL)
    printf("file error");
    while((c=fgetc(fp1))!=EOF)
    {
        if(c>='a'&&c<='z')
        c=c-32;
        else if(c>='A'&&c<='Z')
        c=c+32;
        fputc(c,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("case.txt","r");
    while(!feof(fp2));
    {
        c=fgetc(fp2);
        printf("%c",c);
    }
    fclose(fp2);
}
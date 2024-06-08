/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char ch,str[50];
    int len;
    printf("enter a string");
    while((ch=getchar())!='\n')
    str[len++]=ch;
    str[len]='\0';
    fp=fopen("hello.txt","w");
    if(fp==NULL)
    {
        printf("file error");
        exit(0);
    }
    fputs(str,fp);
    fclose(fp);
    fp=fopen("hello.txt","r");
    if(fp==NULL)
    {
        printf("file error");
        exit(1);
    }
    len=strlen(str);
    fclose(fp);
    printf("original string %s",str);
    printf("reversed string");
    for(int i=len-1;i>=0;i--)
    putchar(str[i]);
    return 0;
}
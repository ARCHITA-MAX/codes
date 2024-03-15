/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int index;
    printf("enter a string");
    fgets(str,20,stdin);
    printf("enter the index");
    scanf("%d",&index);
    int l=strlen(str);
    if(str[l-1]=='\n')
    str[l-1]='\0';
    for(int i=index;i<l-1;i++)
    {
        str[i]=str[i+1];
    }
    str[l-1]='\0';
    puts(str);
    return 0;
}

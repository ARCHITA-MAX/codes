/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<string.h>
#include <stdio.h>
int main()
{
    char str[20];
    int c=0;
    printf("enter the string");
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        c++;
    }
    c++;
    printf("no of words=%d",c);
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[20];
    printf("enter the string");
    fgets(str,20,stdin);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
        i++;
        
    }
    printf("%s",str);
    return 0;
}

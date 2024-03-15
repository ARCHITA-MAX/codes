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
    char str[20],key;
    printf("enter the string");
    fgets(str,20,stdin);
    printf("enter the key");
    scanf("%c",&key);
    int i=0,flag=0;
    while(str[i]!='\0')
    {
        if(str[i]==key)
        {
            printf("key found at %d",i);
        flag=1;
        }
        i++;
    }
    if(flag==0)
    printf("key not found");
    return 0;
}

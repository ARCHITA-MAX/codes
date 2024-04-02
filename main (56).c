/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int l,c=0,i;
    printf("enter the string");
    fgets(str,20,stdin);
    printf("enter the character to be searched for");
    scanf("%c",&ch);
    l=strlen(str);
    if(str[l-1]=='\n')
    str[l-1]='\0';
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        c++;
        i++;
    }
    if(c>0)
    printf("character is present in the string and its frequency is %d",c);
    else
    printf("character is not present");
    return 0;
}
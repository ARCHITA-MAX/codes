/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20],temp;
    printf("enter a string");
    fgets(str,20,stdin);
    int l=strlen(str);
    if(str[l-1]=='\n')
    str[l-1]='\0';
    for(int i=0,j=l-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    if(strcmp(str1,str)==0)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}

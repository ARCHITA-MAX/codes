/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],merged[40];
    int i,j;
    printf("enter string 1");
    fgets(str1,20,stdin);
    int l=strlen(str1);
    if(str1[l-1]=='\n')
    str1[l-1]='\0';
    printf("enter string 2");
    fgets(str2,20,stdin);
    int l1=strlen(str2);
    if(str2[l-1]=='\n')
    str2[l-1]='\0';
    for(i=0;str1[i]!='\0';i++)
    merged[i]=str1[i];
    for(j=0;str2[j]!='\0';j++)
    merged[i+j]=str2[j];
    merged[i+j]='\0';
    printf("merged string=%s",merged);
    return 0;
}

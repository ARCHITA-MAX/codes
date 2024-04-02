/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[40],str2[20];
    int index,l2=0,l1=0;
    printf("enter the two strings");
    fgets(str1,40,stdin);
    fgets(str2,20,stdin);
    printf("enter the index");
    scanf("%d",&index);
    l1=strlen(str1);
    l2=strlen(str2);
    if(str1[l1-1]=='\n')
    str1[--l1]='\0';
    if(str2[l2-1]=='\n')
    str2[--l2]='\0';
    for(int i=0;i<l2;i++)
    {
        str1[i+index]=str2[i];
    }
    printf("%s",str1);
    return 0;
}
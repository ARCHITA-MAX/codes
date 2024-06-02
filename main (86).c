/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,l;
    char *p,s;
    printf("enter the value of n");
    scanf("%d",&n);
    p=(char *)calloc(n,sizeof(char));
    if(p==NULL)
    printf("memory allocation failed");
    printf("enter the string");
    scanf(" ");
    fgets(p,n,stdin);
    l=strlen(p);
    if(p[l-1]=='\n')
    p[l-1]='\0';
    for(int i=0;i<l/2;i++)
    {
        s=p[i];
        p[i]=p[l-i-1];
        p[l-i-1]=s;
    }
    printf("reversed string=%s",p);
    free(p);
    return 0;
}
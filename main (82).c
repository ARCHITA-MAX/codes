/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1;
    char c;
    int vowels=0,consonents=0;
    fp1=fopen("hello.txt","r");
    if(fp1==NULL)
    {
        printf("file error");
        exit(1);
    }
    while((c=fgetc(fp1))!=EOF)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        vowels++;
        else
        consonents++;
    }
    printf("vowels=%d, consonenets=%d",vowels,consonents);
    return 0;
}

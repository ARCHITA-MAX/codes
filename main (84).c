/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char word[30],s[50];
    int l;
    fp1=fopen("hello.txt","r");
    fp2=fopen("copy.txt","w");
    if(fp1==NULL)
    {
        printf("file error");
        exit(1);
    }
    if(fp2==NULL)
    {
        printf("file error");
        exit(1);
    }
    printf("enter a word to be replaced");
    fgets(word,30,stdin);
    l=strlen(word);
    if(word[l-1]=='\n')
    word[l-1]='\0';
    while(fscanf(fp1,"%s",s)!=EOF)
    {
        if(strcmp(s,word)==0)
        fprintf(fp2," ");
        else
        {
            fprintf(fp2,"%s ",s);
            printf("%s ",s);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
    
}
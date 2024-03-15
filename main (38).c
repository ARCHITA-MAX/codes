/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
void reverseString(char *str)
{
    char str1[20],temp;
    int j=0;
    int l=strlen(str);
    for(int i=0;i<=l;i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            str1[j]=str[i];
            j++;
        }
        else
        {
            str1[j]='\0';
            int l1=strlen(str1);
            for(int n=0,m=l1-1;n<m;n++,m--)
            {
            temp=str1[n];
            str1[n]=str1[m];
            str1[m]=temp;
            }
            int n=i-j;
            for (int k=0;k<l1;k++,n++) 
            {
                str[n]=str1[k];
            }
            j = 0;
        }
    }
}
int main()
{
    char str[20];
    printf("enter the string");
    fgets(str,20,stdin);
    reverseString(str);
    printf("reversed string=%s",str);
}

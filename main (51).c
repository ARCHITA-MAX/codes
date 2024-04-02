#include<stdio.h>
#include<string.h>
int main() 
{
    char str1[100], str2[100];
    int l=0,j=0;
    fgets(str1,100,stdin);
    l=strlen(str1);
    for(int i=0;i<l;i++) 
    {
        if ((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z'))
        {
            str2[j]=str1[i];
            j++;
        }
    }
    str2[j]='\0'; 
    printf("%s", str2);
    return 0;
}

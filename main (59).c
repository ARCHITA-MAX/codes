/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[40];        
    char newString[10][10]; 
    int i,j=0,ctr=0,l=0;          
    fgets(str,40, stdin); 
    l=strlen(str);
    for(i=0;i<=l;i++) 
    {
        if(str[i]==' ' || str[i]=='\0') 
        {
            newString[ctr][j]='\0'; 
            ctr++;  
            j=0;  
        } 
        else 
        {
            newString[ctr][j]=str[i]; 
            j++;  
        }
    }
    printf("\nStrings or words after split by space are :\n");
    for(i=0;i<ctr;i++) 
    {
        printf("%s\n",newString[i]);
    }
    return 0;
}

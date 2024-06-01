/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() 
{
    char *str1 = (char *)malloc(50 * sizeof(char));
    char *str2 = (char *)malloc(50 * sizeof(char));
    printf("Enter first string");
    scanf("%s", str1);
    printf("Enter second string");
    scanf("%s", str2);
    int *count1 = (int *)calloc(50, sizeof(int));
    int *count2 = (int *)calloc(50, sizeof(int));
    int l1=strlen(str1);
    int l2=strlen(str2);
    int anagram = 1;
    for(int i=0;i<l1;i++)
    {
        if(count1[i] != count2[i])
        {
            anagram=0;
            break;
        }
    }
    if (anagram)
    printf("The strings are anagrams.\n");
    else
    printf("The strings are not anagrams.\n");
    return 0;
}

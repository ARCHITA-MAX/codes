/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word[20],str1[20];
    int j=0;
    printf("Enter a string: ");
    fgets(str,100, stdin);
    printf("Enter the word to search: ");
    fgets(word,20,stdin);
    int l=strlen(str);
    str[l]=' ';
    for(int i=0;i<l;i++)
    {
    while(str[i]!=0)
    {
        str1[j]=str[i];
        j++;
    }
        char ptr = strcmp(str1, word);
        if (ptr !=0)
        printf("'%s' found in the string.\n", word);
        else
        printf("not found");
        return 0;
    }
}


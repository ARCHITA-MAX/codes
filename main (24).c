/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    printf("Enter a string: ");
    fgets(str,100, stdin);
    printf("Enter the word to search: ");
    scanf("%s", word);

    char ptr = strcmp(str, word);
    if (ptr !=0)
        printf("'%s' found in the string.\n", word);
    else
        printf("'%s' not found in the string.\n", word);

    return 0;
}


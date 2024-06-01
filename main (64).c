/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    char input[50];
    printf("Enter a string");
    fgets(input,sizeof(input),stdin);
    if(input[strlen(input) - 1] == '\n')
    input[strlen(input) - 1] = '\0';
    int wordCount = 0;
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i] == ' ')
        wordCount++;
    }
    wordCount++;
    char** words=(char**)malloc(wordCount * sizeof(char*));
    if (words == NULL) 
    {
        printf("Memory allocation failed!");
        return 1;
    }
    int wordIndex = 0;
    char* token = strtok(input, " ");
    while(token != NULL)
    {
        words[wordIndex] = (char*)malloc((strlen(token) + 1) * sizeof(char));
        if(words[wordIndex] == NULL) 
        {
            printf("Memory allocation failed!");
            return 1;
        }
        strcpy(words[wordIndex], token);
        wordIndex++;
        token = strtok(NULL, " ");
    }
    printf("Words separated:\n");
    for(int i=0;i<wordCount;i++)
    {
        printf("%s\n", words[i]);
        free(words[i]);
    }
    free(words);
    return 0;
}

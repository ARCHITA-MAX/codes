#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char *str;
    int length;
    printf("Enter the length of the string");
    scanf("%d",&length);
    str=(char *)malloc((length + 1) * sizeof(char));
    if(str == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the string");
    scanf("%s",str);
    for(int i=0;i<length;i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
            {
            if(str[i] >= 'a' && str[i] <= 'z') 
            {
                str[i]-=32;
            }
        }
    }
    printf("Modified string%s\n",str);
    free(str);
    return 0;
}

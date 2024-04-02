#include<stdio.h>
#include<string.h>
int main() 
{
    char str[20], ch;
    int c,c1=0;
    fgets(str,20,stdin);
    int l = strlen(str);
    for(int i=0;i<l;i++)
    {
        c = 1;
        if(str[i]!=' ') 
        { 
            for(int j=i+1;j<l;j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                }
            }
            if(c>c1)
            { 
                c1=c;
                ch=str[i];
            }
        }
    }
    printf("Highest frequency character appers in a string is %c", ch);
    return 0;
}

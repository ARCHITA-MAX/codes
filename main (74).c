/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct student
{
    char nm[50];
    int r;
    float m;
};
int main()
{
    struct student s1,s2;
    printf("input the records:name, roll no, marks");
    scanf("%s%d%f",s1.nm,&s1.r,&s1.m);
    scanf("%s%d%f",s2.nm,&s2.r,&s2.m);
    if(s1.m>s2.m)
    printf("%s%d",s1.nm,s1.r);
    else
    printf("%s%d",s2.nm,s2.r);
    return 0;
}

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char nm[50];
    char d[50];
    float s;
};
int main()
{
    int n,res;
    printf("enter the number of employees");
    scanf("%d",&n);
    struct employee E[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the records:name,designation and salary ");
        scanf("%s%s%f",E[i].nm,E[i].d,&E[i].s);
    }
    for(int i=0;i<n;i++)
    {
        res=strcmp(E[i].d,"manager");
        if(res==0)
        E[i].s=E[i].s+0.2*E[i].s;
        else
        {
            res=strcmp(E[i].d,"accountant");
            if(res==0)
            E[i].s=E[i].s+0.15*E[i].s;
            else
            E[i].s=E[i].s+0.10*E[i].s;
        }
    }
    for(int i=0;i<n;i++)
    printf("%s%s%f",E[i].nm,E[i].d,E[i].s);
    return 0;
}
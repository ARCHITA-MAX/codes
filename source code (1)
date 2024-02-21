#include<stdio.h>
int palindrome(int);
int check(int[],int);
int main()
{
    int a[5]={121,156,22,767,89},c;
    c=check(a,5);
    printf("the number of palindrome are=%d",c);
    return 0;
}
int check(int b[],int n)
{
    int i,c;
    for(int i=0;i<n;i++)
    {
        if(palindrome[b[i]])
        c++;
    }
    return c;
}
int palindrome(int x)
{
    int a,rev=0;
    a=x;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x=x/10;
    }
    if(rev==a)
    return 1;
    else
    return 0;
}
    

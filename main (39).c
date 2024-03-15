/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in the array");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *p=a;
    int temp;
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<i;j++)
        {
            if(*(p+i)>*(p+j))
            temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
        }
    }
    for(int i=0;i<n;i++)
    printf("%d",*(p+i));
    return 0;
}
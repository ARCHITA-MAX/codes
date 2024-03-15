/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,m;
    printf("enter the values of n and m");
    scanf("%d%d",&n,&m);
    int a[n][m],temp=0;
    printf("enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
         temp=a[i][j];
         a[i][j]=a[j][i];
         a[j][i]=temp;
        }
    }
    printf("transposed matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

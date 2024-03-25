/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,a1[20],a2[20],a3[20],i=0,j=0,k=0;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for(i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&a1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a1[i]%2==0)
        {
            a2[j]=a1[i];
            j++;
        }
        else
        {
            a3[k]=a1[i];
            k++;
        }
    }
    printf("\nThe Even elements are :\n");
    for(i=0;i<j;i++)
    {
        printf("%d ",a2[i]);
    }
    printf("\nThe Odd elements are :\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",a3[i]);
    }
    printf("\n");
	return 0;
}

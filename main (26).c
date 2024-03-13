/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverseArray(int arr[],int size)
{
    int d=0,a=0,rev=0;
    for(int i=0;i<size;i++)
    {
        rev=0;
        d=arr[i];
        while(d>0)
        {
            a=d%10;
            rev=rev*10+a;
            d=d/10;
        }
        arr[i]=rev;
    }
    printf("reversed array");
    for(int i=0;i<size;i++)
    printf("%d",arr[i]);
}
int main()
{
   int size;
   printf("enter the size of the array");
   scanf("%d",&size);
   int arr[size];
   printf("enter the elements in array");
   for(int i=0;i<size;i++)
   scanf("%d",&arr[i]);
   reverseArray(arr,size);
   return 0;
}

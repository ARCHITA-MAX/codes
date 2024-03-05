/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//PROGRAM TO FIND THE SUM OF DIGIT OF ELEMENTS IN AN ARRAY
#include <stdio.h>
int SumOfDigits(int num)
{
    int sum=0;
    while(num>0)
    {
        sum=sum+num/10;
        num=num/10;
    }
    return sum;
}
int SumofDigitsInArray(int arr[],int size)
{
    int totalSum=0;
    for(int i=0;i<size;i++)
    {
       totalSum=totalSum+SumOfDigits(arr[i]);
    }
    return totalSum;
}
int main()
{
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements in the array");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int result=SumofDigitsInArray(arr,size);
    printf("sum of digits of array=%d",result);
    return 0;
}

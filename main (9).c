#include <stdio.h>
int sumOfDigits()
{
    int sum=0;
    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}
int sumOfDigitsInArray(int arr[],int size)
{
    int totalSum=0;
    for(int i=0;i<size;i++)
    totalSum=totalSum+sumOfDfDigits(arr[i]);
    return  totalSum;
}
int main()
{
    int size;
    pritnf("enter the value of the array");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of the array");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    int reverse=sumOfDigitsInArray(arr,size);
    printf("sum=%d",result);
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sumOfDigits(int num);
int main()
{
    int number;
    printf("enter  a number");
    scanf("%d",&number);
    int result=sumOfDigits(number);
    printf("sum of digits=%d",result);
    return 0;
}
int sumOfDigits(int num)
{
    if(num>10)
    return num;
    else
    return num%10+sumOfDigits(num/10);
}

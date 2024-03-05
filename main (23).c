/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int isPalindrome(int num)
{
    int ONum = num;
    int rev=0;
    while (num > 0)
    {
        int remainder=num % 10;
        rev= rev*10+remainder;
        num/=10;
    }
    if (ONum == rev)
        return 1;
    else
        return 0;
}
int main() 
{
    int array[]={121, 12321, 12345, 1221, 1331};
    int size=5;
    for (int i = 0; i < size; i++) 
    {
        if (isPalindrome(array[i]))
            printf("%d is a palindrome.\n", array[i]);
        else 
            printf("%d is not a palindrome.\n", array[i]);
    }
    return 0;
}

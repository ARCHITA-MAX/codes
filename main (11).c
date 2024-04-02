/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int chkSubset(int arr1 , int no1, int arr2, int no2) 
{
    int i, j;
    for (i = 0; i <no1; i++)
    {
        for (j = 0; j <no2; j++)
        {
            if (arr2[i] == arr1[j])
                break;
        }
        if (j == no1)
            return 0;
    }
    return 1; 
}

int main() 
{
    int arr1[20],arr2[20];
    int i;
    printf("enter the value of n1 & n2");
    scanf("%d%d",&n1,&n2);
    pritnf("enter the elements of  arrays1");
    for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
    printf("enter the elements of array2");
    for(int j=0;j<n2;i++)
    scanf("%d";&arr2[j])
    if (chkSubset(arr1, no1, arr2, no2))
        printf("The second array is a subset of the first array");
    else
        printf("The second array is not a subset of the first array");

    return 0;
}

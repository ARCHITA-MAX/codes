/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void newArry(int arr[], int n) 
{ 
    if (n <= 1)  
        return; 
    int pre= arr[0]; 
    arr[0] = arr[0] * arr[1];
    for (int i = 1; i < n - 1; i++) 
    { 
        int current= arr[i]; 
        arr[i] = pre * arr[i + 1]; 
        pre= current; 
    } 
    arr[n - 1] = pre* arr[n - 1]; 
} 

int main() 
{ 
    int arr[20]; 
    int n;
    int i; 
    printf("ente rthe value of n");
    scanf("%d",&n);
    printf("enter the elements in the array");
    for(i = 0; i < n; i++)
    {
        scanf("%d  ", &arr[i]);
    }
    printf("\n");
    printf("The new array is");	
    newArry(arr, n); 
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr1[i]); 
    }

    return 0; 
}

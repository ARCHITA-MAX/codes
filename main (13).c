/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void seg(int arr[], int n) 
{ 
    int ctr = 0;
    for (int i = 0; i < n; i++)
    { 
        if (arr1[i] == 0) 
            ctr++; 
    } 
    for (int i = 0; i < ctr; i++) 
        arr[i] = 0; 
    for (int i = ctr; i < n; i++) 
        arr[i] = 1; 
} 
void printSeg(int arr1[], int n) 
{ 
    printf("The array after segregation is: "); 
    for (int i = 0; i < n; i++) 
        printf("%d  ", arr1[i]); 
} 

int main() 
{ 
    int arr[20];  
    int n; 
	int i;
    printf("enter the value of n");
    scanf("%d",&n);
	printf("enter the elements in the array");
	for(i = 0; i < n; i++)
	{
		scanf("%d  ",&arr[i]); 
	}
	printf("\n");
    seg(arr, n); 
    printSeg(arr, n); 
    return 0; 
}

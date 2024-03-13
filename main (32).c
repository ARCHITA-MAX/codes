/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int r, c, temp = 0;
    printf("Enter the value of r and c: ");
    scanf("%d%d", &r, &c);
    int a[r][c];
    
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Sorting the array
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            for (int m = 0; m < r; m++) {
                for (int n = 0; n < c; n++) {
                    if (a[i][j] > a[m][n]) {
                        temp = a[i][j];
                        a[i][j] = a[m][n];
                        a[m][n] = temp;
                    }
                }
            }
        }
    }
    
    // Printing the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

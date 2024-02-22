/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*****************************************************************************
    #include<stdio.h>
    int main()
    {
    int i, j, arr[20][20], sum = 0, n;
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);
    printf("Input elements in the matrix");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
            if (i == j) 
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("sum=%d", sum) ;
    return 0;
}
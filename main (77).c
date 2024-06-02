/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
    FILE *fp, *fo, *fe; // File pointers for general, odd, and even files
    int n, i, num, ce = 0, co = 0; // Variables for number of inputs, iteration, current number, count of even and odd numbers

    // Prompt user for the number of integers to process
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Open file hello.txt in write mode
    fp = fopen("hello.txt", "w");

    // Input numbers from the user and write them to hello.txt
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        putw(num, fp);
    }

    // Close the hello.txt file
    fclose(fp);

    // Open hello.txt in read mode
    fp = fopen("hello.txt", "r");

    // Open even.txt and odd.txt in write mode
    fe = fopen("even.txt", "w");
    fo = fopen("odd.txt", "w");

    // Read numbers from hello.txt, segregate into even and odd, and write them to respective files
    for (int i = 0; i < n; i++)
    {
        num = getw(fp);
        if (num % 2 == 0)
        {
            putw(num, fe);
            ce++;
        }
        else
        {
            putw(num, fo);
            co++;
        }
    }

    // Close all files
    fclose(fp);
    fclose(fe);
    fclose(fo);

    // Re-open even.txt in read mode and print all even numbers
    fe = fopen("even.txt", "r");
    printf("Even numbers: ");
    for (int i = 0; i < ce; i++)
    {
        num = getw(fe);
        printf("%d ", num);
    }
    fclose(fe);

    // Re-open odd.txt in read mode and print all odd numbers
    fo = fopen("odd.txt", "r");
    printf("\nOdd numbers: ");
    for (int i = 0; i < co; i++)
    {
        num = getw(fo);
        printf("%d ", num);
    }
    fclose(fo);

    return 0;
}

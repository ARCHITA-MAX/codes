/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
 int main()
 {
     char str[20];
     printf("Enter the string ");
     fgets(str,20,stdin);
     int r=strlen(str);
     printf("%d is the length of the string\n",r-1);
     return 0;
 }
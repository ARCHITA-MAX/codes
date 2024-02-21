/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include <stdio.h>
 #include <string.h>
 int main() {
     char str[50];
     printf("Enter a string: ");
     fgets(str,50,stdin); 
     int l= strlen(str);
     for(int i=0; i<l/2; i++) {
         char temp = str[i];
         str[i] = str[len - i - 1];
         str[len - i - 1] = temp;
     }
    printf("Reversed string: %s\n", str);
     return 0;
 }

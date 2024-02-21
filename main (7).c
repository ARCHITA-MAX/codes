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
     int len = strlen(str);
     int f=0;
     for(int l=0,r=len-2;l<r;l++,r--)
     {
         if(str[l]==str[r])
         {f=1;
         printf("%d",f);}
     }
     if(f==1)
     {
         printf("string is palendron");
     }
     else
     printf("String is not palendrom");
     return 0;
 }
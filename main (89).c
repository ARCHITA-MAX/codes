/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    // Define a structure 'box' with a member 'shape'
    struct box {
        char shape[10];
    } box1, box2;

    // Copy the string "TRIANGLE" to box1.shape
    strcpy(box1.shape, "TRIANGLE");
    printf("%s\n", box1.shape); // Print the shape of box1

    // Assign box1 to box2 (this performs a shallow copy)
    box2 = box1;

    // Copy the string "SQUARE" to box2.shape
    strcpy(box2.shape, "SQUARE");
    printf("%s\n", box1.shape); // Print the shape of box1 again

    return 0;
}

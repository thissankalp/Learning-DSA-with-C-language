#include<stdio.h>

int main(){

    int x = 10;            // Declare an integer variable x and store 10 in it
    int *p = &x;           // Declare a pointer p that stores the address of x

    // Printing the value stored in x directly
    printf("Value of x : %d\n", x);    
    // Output: 10
    // This is just the value we assigned to x.

    // Printing the memory address of x using &x
    printf("Address of x : %p\n", &x); 
    // Output: 0061FF18 (example, will change each run)
    // This looks like a random number, but it is the actual
    // location in RAM where variable x is stored.
    // The operating system decides this location at runtime.
    // It may change every time the program runs due to ASLR (security feature).

    // Printing the value stored in the pointer p
    printf("Pointer p stores address : %p\n", p);  
    // Output: 0061FF18 (same as &x)
    // Because p = &x, p holds the memory address of x.

    // Dereferencing pointer p (accessing the value at the address it points to)
    printf("Value at address stored at p : %d\n", *p); 
    // Output: 10
    // *p means "go to the address stored in p" (which is x's address)
    // and fetch the value there, which is 10.

    return 0;
}


//A pointer is simply a variable that stores the address of another variable.

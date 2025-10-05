#include <stdio.h>

// A structure in C is a user-defined data type that lets you group variables of different data types under one name.
// Think of it as a “blueprint” for an object. Useful for organizing related data together.

struct student {
    char name[20];   // Name of the student (string/array of characters)
    int age;         // Age of the student
    float marks;     // Marks of the student
};

int main() {
    // Creating a structure variable s1
    struct student s1 = {"Sankalp", 19, 45.8};

    // Dot operator (.) → used to access members when you have the actual structure variable
    printf("Name : %s\n", s1.name);     // Access string member
    printf("Age : %d\n", s1.age);       // Access integer member
    printf("Marks : %.2f\n", s1.marks); // Access float member with 2 decimal places

    printf("\n");

    // Creating another structure variable s2
    struct student s2 = {"Aman", 20, 55.8};

    // Pointer to structure → store the address of s2
    struct student *ptr = &s2;

    // Arrow operator (->) → used to access members when you have a pointer to a structure
    printf("Name : %s\n", ptr->name);   // Access string member via pointer
    printf("Age : %d\n", ptr->age);     // Access integer member via pointer
    printf("Marks : %.2f\n", ptr->marks); // Access float member via pointer

    // Important Notes:
    // 1. Use . (dot) when you have the structure variable itself.
    // 2. Use -> (arrow) when you have a pointer to the structure.
    // 3. You can have arrays of structures to store multiple objects.
    // 4. Structures are the basis for more complex data structures like Linked Lists, Trees, etc.
    // 5. The size of a structure is the sum of sizes of its members, often aligned to memory boundaries.

    return 0;
}

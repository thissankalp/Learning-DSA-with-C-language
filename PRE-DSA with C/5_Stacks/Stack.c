#include <stdio.h>
#define MAX 100   // Maximum size of the stack

// ==========================================================
// 🌟 STACK IMPLEMENTATION USING ARRAY
// ==========================================================
//
// A Stack is a **linear data structure** that follows the
// LIFO (Last In, First Out) principle.
// ----------------------------------------------------------
// LIFO means: The last element inserted is the first one removed.
//
// 📘 Real-life analogy: Think of a stack of plates —
// you add (push) plates on top and remove (pop) from the top.
//
// ----------------------------------------------------------
// 📦 Basic Stack Operations:
// ----------------------------------------------------------
// 1️⃣ push(x)  → Add an element on the top of the stack
// 2️⃣ pop()    → Remove and return the top element
// 3️⃣ peek()   → View the top element without removing it
// 4️⃣ isEmpty() → Check if stack is empty
// 5️⃣ display() → Print all elements from top to bottom
// 6️⃣ search(x) → Find if an element exists in stack
// ----------------------------------------------------------
// 📊 Difference between Stack and Other Data Structures
// ----------------------------------------------------------
// 🔹 Stack vs Queue:
//     Stack → LIFO (last in, first out)
//     Queue → FIFO (first in, first out)
//
// 🔹 Stack vs Linked List:
//     Stack has restricted access (only top)
//     Linked List allows access to any element.
//
// 🔹 Stack vs Array:
//     Stack adds/removes elements only from one end (top)
//     Array allows access and modification at any index.
//
// ----------------------------------------------------------
// ⏱️ Time Complexity of Stack Operations
// ----------------------------------------------------------
// Operation     | Time Complexity
// --------------|----------------
// push()        | O(1)
// pop()         | O(1)
// peek()        | O(1)
// isEmpty()     | O(1)
// display()     | O(n)
// search        | O(n)
// ----------------------------------------------------------
// 💾 Space Complexity: O(n)
// Because the stack stores up to 'n' elements in an array.
// ==========================================================

int stack[MAX];  // Array to store stack elements
int top = -1;    // Points to the topmost element (-1 means empty)

// ==========================================================
// 🟢 PUSH FUNCTION
// ==========================================================
// Adds an element to the top of the stack.
//
// Steps:
// 1️⃣ Check if the stack is full → Overflow
// 2️⃣ If not full, increment top and insert the new element
//
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int push(int value) {
    if (top == MAX - 1) {
        printf("Cannot Push! Stack Overflow.\n");
        return 0;
    }
    top++;
    stack[top] = value;
    return 1; // Success
}

// ==========================================================
// 🔴 POP FUNCTION
// ==========================================================
// Removes and returns the topmost element.
//
// Steps:
// 1️⃣ Check if stack is empty → Underflow
// 2️⃣ If not empty, return stack[top] and decrement top
//
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int pop() {
    if (top == -1) {
        printf("Cannot Pop! Stack Underflow.\n");
        return -1;
    }
    int poppedValue = stack[top];
    top--;
    return poppedValue;
}

// ==========================================================
// 🟣 PEEK FUNCTION
// ==========================================================
// Returns the current top element without removing it.
//
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack[top];
}

// ==========================================================
// 🟠 ISEMPTY FUNCTION
// ==========================================================
// Checks whether the stack is empty.
//
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int isEmpty() {
    return (top == -1);
}

// ==========================================================
// 🔵 DISPLAY FUNCTION
// ==========================================================
// Prints all elements of the stack from top to bottom.
//
// Time Complexity: O(n)
// Space Complexity: O(1)
// ==========================================================
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }

    printf("\nStack (Top → Bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("\n");
}


// ==========================================================
// 🔍 SEARCH FUNCTION
// ==========================================================
// Searches for a given element in the stack.
// ----------------------------------------------------------
// Concept:
// Since stack only allows access from top,
// we must linearly search all elements (top → bottom).
//
// Returns index (from top) if found, -1 otherwise.
// ----------------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(1)
// ==========================================================
int search(int value) {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    }

    for (int i = top; i >= 0; i--) {
        if (stack[i] == value) {
            printf("%d found at position %d from TOP.\n", value, (top - i + 1));
            return i;
        }
    }
    printf("%d not found in stack.\n", value);
    return -1;
}


// ==========================================================
// 🧠 MAIN FUNCTION (DEMONSTRATION)
// ==========================================================
// Demonstrates basic stack operations:
// 1️⃣ Push multiple elements
// 2️⃣ Display stack
// 3️⃣ Peek top element
// 4️⃣ Pop top element
// 5️⃣ Display after pop
// ==========================================================
int main() {
    int n, value;

    printf("Enter size of your stack: ");
    scanf("%d", &n);

    // PUSH elements
    for (int i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }

    // DISPLAY all stack elements
    display();

    // SHOW top element
    printf("Top element: %d\n", peek());

    // POP one element
    printf("Popped element: %d\n", pop());

    // SHOW stack after pop
    printf("After popping one element:\n");
    display();

    //SEARCH an element
    int target;
    printf("\nEnter value to search in stack: ");
    scanf("%d", &target);
    search(target);

    // CHECK if stack is empty
    if (isEmpty())
        printf("Stack is empty.\n");
    else
        printf("Stack is not empty.\n");

    return 0;
}

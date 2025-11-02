#include <stdio.h>
#define MAX 100

// ==========================================================
// 🌟 QUEUE IMPLEMENTATION USING ARRAY
// ==========================================================
//
// A Queue is a linear data structure that follows the
// FIFO (First In, First Out) principle.
//
// Example:
// Enqueue(10) → Enqueue(20) → Enqueue(30)
// Dequeue() removes 10 first (the earliest added)
//
// ----------------------------------------------------------
// ✅ Basic Operations in Queue
// ----------------------------------------------------------
// 1️⃣ enqueue(x) → Add element at the REAR end
// 2️⃣ dequeue()  → Remove element from the FRONT end
// 3️⃣ peek()     → See front element without removing
// 4️⃣ isEmpty()  → Check if queue is empty
// 5️⃣ isFull()   → Check if queue is full
// 6️⃣ display()  → Print all queue elements
//
// ----------------------------------------------------------
// ⏱️ TIME COMPLEXITY
// ----------------------------------------------------------
// Operation   | Time Complexity | Space Complexity
// ------------|----------------|-----------------
// enqueue()   | O(1)           | O(1)
// dequeue()   | O(1)           | O(1)
// peek()      | O(1)           | O(1)
// isEmpty()   | O(1)           | O(1)
// isFull()    | O(1)           | O(1)
// display()   | O(n)           | O(1)
// ----------------------------------------------------------
// 💾 Overall Space Complexity: O(n)
// Because we use an array to store queue elements.
// ==========================================================

// Queue variables
int queue[MAX];
int front = -1;  // Points to the first element
int rear = -1;   // Points to the last element

// ==========================================================
// 🟢 ENQUEUE FUNCTION
// ==========================================================
// Adds an element at the rear of the queue
// ----------------------------------------------------------
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot Enqueue.\n");
        return 0;
    }

    if (front == -1) {
        front = 0; // first element being inserted
    }

    rear++;
    queue[rear] = value;
    return 1;
}

// ==========================================================
// 🔴 DEQUEUE FUNCTION
// ==========================================================
// Removes and returns element from the front of the queue.
// ----------------------------------------------------------
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot Dequeue.\n");
        return -1;
    }

    int removedValue = queue[front];
    front++; // move front forward

    // Reset when queue becomes empty
    if (front > rear) {
        front = rear = -1;
    }

    return removedValue;
}

// ==========================================================
// 🟣 PEEK FUNCTION
// ==========================================================
// Returns the front element without removing it.
// ----------------------------------------------------------
// Time Complexity: O(1)
// Space Complexity: O(1)
// ==========================================================
int peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue[front];
}

// ==========================================================
// 🟠 isEmpty FUNCTION
// ==========================================================
int isEmpty() {
    return (front == -1);
}

// ==========================================================
// 🔵 isFull FUNCTION
// ==========================================================
int isFull() {
    return (rear == MAX - 1);
}

// ==========================================================
// 🧾 DISPLAY FUNCTION
// ==========================================================
// Prints all elements from front to rear.
// ----------------------------------------------------------
// Time Complexity: O(n)
// Space Complexity: O(1)
// ==========================================================
void display() {
    if (front == -1 || front > rear) {
        printf(" Queue is empty!\n");
        return;
    }

    printf("\n Queue (Front to Rear): ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// ==========================================================
// 🧠 MAIN FUNCTION
// ==========================================================
int main() {
    int n, value;

    printf("Enter number of elements to enqueue: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        enqueue(value);
    }

    display();

    printf("\nFront element (peek): %d\n", peek());

    printf("\nDequeuing one element...\n");
    printf("Dequeued: %d\n", dequeue());

    display();

    if (isEmpty())
        printf(" Queue is empty.\n");
    else
        printf(" Queue is not empty.\n");

    return 0;
}

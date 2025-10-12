#include<stdio.h>
#include<stdlib.h>

// ========================
// What is a Linked List?
// ========================
// A Linked List is a linear data structure where elements (nodes) 
// are connected using pointers instead of being stored 
// in contiguous memory (like arrays).
//
// Each node has 2 parts:
//   1. data -> stores the actual value
//   2. next -> pointer to the next node
//
// Example: 10 -> 20 -> 30 -> NULL
// (NULL means end of list)
//
// Advantages over arrays:
// - Dynamic size (we can grow/shrink easily).
// - Easy insertions/deletions (no shifting required).
//
// Types of linked lists:
// - Singly Linked List (each node points to next node).
// - Doubly Linked List (each node points to next and previous).
// - Circular Linked List (last node connects back to first).
//
// Here we are working with **Singly Linked List**.

// ========================
// Node structure
// ========================
struct Node {
    int data;            // data part
    struct Node *next;   // pointer to next node
};

// ========================
// Insert at end function
// ========================
// Steps:
// 1. Create a new node with given value.
// 2. If head is NULL, make new node the head.
// 3. Else, traverse till last node.
// 4. Link last node to new node.
void insertatEnd(struct Node **head, int value) {
    // Step 1: Create new node
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // Step 2: If list is empty, new node becomes head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Step 3: Traverse to last node
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Step 4: Link last node with newNode
    temp->next = newNode;
}

// ========================
// Print list function
// ========================
// Steps:
// 1. Start from head.
// 2. Traverse till NULL.
// 3. Print each node’s data.
// Example: 10 -> 20 -> 30 -> NULL
void printList(struct Node *head) {
    struct Node *temp = head;
    printf("Linked List Elements:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ========================
// Main function
// ========================
// Steps performed here:
// 1. Start with empty head.
// 2. Ask user for size of list.
// 3. Take input values and insert them at end.
// 4. Print the final list.
int main() {
    struct Node *head = NULL;  // start with empty list
    int n, value;

    printf("Enter size of the Linked List: ");
    scanf("%d", &n);

    // Create linked list with user input
    for (int i = 1; i <= n; i++) {
        printf("Enter value for %d element: ", i);
        scanf("%d", &value);
        insertatEnd(&head, value);
    }

    // Print full list
    printList(head);

    return 0;
}

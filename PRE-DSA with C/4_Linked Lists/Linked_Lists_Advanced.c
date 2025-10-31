#include<stdio.h>
#include<stdlib.h>

// Definition of a Node in the Linked List
struct Node {
    int data;             // Data part of the node
    struct Node *next;    // Pointer to the next node
};

/* 
Function: insertatEnd
---------------------
Inserts a new node at the END of the linked list.
Returns the (possibly updated) head pointer.

Why struct Node* ?
-----------------
- We return the updated head node, because:
   * If the list is empty initially, the new node will become the new head.
   * Otherwise, head stays the same.
- Using return value makes the code cleaner and avoids double pointer (**head).
*/
struct Node* insertatEnd(struct Node *head, int value) {
    // Step 1: Create a new node
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;     // Assign the value
    newNode->next = NULL;      // This will be the last node, so next = NULL

    // Step 2: If list is empty, new node becomes head
    if (head == NULL) {
        return newNode;
    }

    // Step 3: Otherwise, traverse till the last node
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Step 4: Link the last node with the new node
    temp->next = newNode;

    // Step 5: Return the unchanged head pointer
    return head;
}

/*
Function: printList
-------------------
Prints the entire linked list starting from head.
We don't need to return anything here (so return type is void).
*/
void printList(struct Node *head) {
    struct Node *temp = head;

    printf("Linked List: ");
    // Traverse the list until NULL is reached
    while (temp != NULL) {
        printf("%d -> ", temp->data);  // Print current node's data
        temp = temp->next;             // Move to next node
    }
    printf("NULL\n");  // End of the list
}

/*
Main function: 
---------------
- Takes input size of the list
- Inserts elements one by one at the end
- Finally prints the list
*/
int main() {
    struct Node *head = NULL;  // Initially, the list is empty
    int n, value;

    printf("Enter size of the Linked List: ");
    scanf("%d", &n);

    // Insert n elements
    for (int i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &value);

        // Very important: Update head using return value
        head = insertatEnd(head, value);
    }

    // Print the final linked list
    printList(head);

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

// ===================================================
// DOUBLY LINKED LIST — FINAL EXPLAINED VERSION
// ===================================================
//
// A doubly linked list allows movement in BOTH directions
// because every node has:
//     1️⃣ data field
//     2️⃣ next pointer (to the next node)
//     3️⃣ prev pointer (to the previous node)
// ===================================================

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

// ===================================================
// INSERT NODE AT END
// ===================================================
struct Node * insertatEnd(struct Node *head, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    // Case 1: Empty list → this becomes the first node
    if (head == NULL) {
        return newNode;
    }

    // Case 2: Traverse till the last node
    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Now temp points to the LAST node
    temp->next = newNode;   // Connect last node → new node
    newNode->prev = temp;   // Connect new node → last node (back link)
    return head;
}

// ===================================================
// PRINT LIST FORWARD
// ===================================================
void printForward(struct Node *head) {
    struct Node *temp = head;
    printf("\nDoubly Linked List (Forward): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ===================================================
// PRINT LIST BACKWARD
// ===================================================
// Move to the end first, then traverse back
void printBackward(struct Node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    printf("\nDoubly Linked List (Backward): ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

// ===================================================
// DELETE NODE BY VALUE
// ===================================================
struct Node * deleteListElement(struct Node *head, int target) {
    struct Node *temp = head;

    // Traverse to find the node
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\n%d not found in the list!\n", target);
        return head;
    }

    // Case 1: Deleting head node
    if (temp == head) {
        head = temp->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
        printf("\n%d deleted from the beginning!\n", target);
        return head;
    }

    // Case 2: Deleting middle or last node
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
    printf("\n%d deleted successfully!\n", target);
    return head;
}

// ===================================================
// REVERSE A DOUBLY LINKED LIST
// ===================================================
// Swaps 'next' and 'prev' pointers for each node.
struct Node * reverseDoublyList(struct Node *head) {
    struct Node *temp = NULL;
    struct Node *curr = head;

    while (curr != NULL) {
        // Swap prev and next pointers
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        // Move to the next node (which is actually the previous one)
        curr = curr->prev;
    }

    // After loop, temp points to the 2nd last processed node,
    // so temp->prev is the new head.
    if (temp != NULL)
        head = temp->prev;

    return head;   // ✅ IMPORTANT: Return new head
}

// ===================================================
// MAIN FUNCTION
// ===================================================
int main() {
    struct Node *head = NULL;
    int n, value;

    printf("Enter size of your doubly linked list: ");
    scanf("%d", &n);

    // Insert nodes
    for (int i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &value);
        head = insertatEnd(head, value);
    }

    printf("\nOriginal List:");
    printForward(head);

    // Uncomment to test deletion
    /*
    int target;
    printf("\nEnter element to delete: ");
    scanf("%d", &target);
    head = deleteListElement(head, target);
    printForward(head);
    */

    printf("\nReversing the list...\n");
    head = reverseDoublyList(head);   
    printForward(head);

    printf("\nBackward traversal after reverse: ");
    printBackward(head);

    return 0;
}

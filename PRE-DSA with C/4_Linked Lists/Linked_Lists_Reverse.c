#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

struct Node * insertatEnd(struct Node * head, int value){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(head == NULL){
        return newNode;
    }

    struct Node * temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    return head;
}

// Reverse the Linked List
struct Node* reverseList(struct Node *head) {
    struct Node *prev = NULL;     // previous node starts as NULL
    struct Node *curr = head;     // current node starts at head
    struct Node *next = NULL;     // to temporarily store next node

    // Traverse the list
    while (curr != NULL) {
        next = curr->next;        // 1️⃣ store next node
        curr->next = prev;        // 2️⃣ reverse the link
        prev = curr;              // 3️⃣ move prev one step ahead
        curr = next;              // 4️⃣ move curr one step ahead
    }

    // After loop, prev will be the new head
    return prev;
}

void printList(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp ->next;
    }
    printf("NULL\n");

}

int main(){
    struct Node *head = NULL;
    int n, value;
    printf("Enter size of linked List : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        printf("Enter element %d : ", i);
        scanf("%d", &value);
        head = insertatEnd(head, value);
    }

    printf("Original Linked List : ");
    printList(head);

    printf("Reversed Linked List : ");
    head = reverseList(head);
    printList(head);
    return 0;
}
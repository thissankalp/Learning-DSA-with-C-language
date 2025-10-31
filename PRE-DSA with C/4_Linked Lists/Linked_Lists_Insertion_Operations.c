#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * insertatEnd(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(head == NULL){
        return newNode;
    }
    
    struct Node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> next = newNode;
    return head;
}

struct Node * insertatbeginning(struct Node *head, int value){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
    return head;
}

struct Node * insertAtPosition(struct Node *head, int value, int pos){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(pos == 1){
        newNode -> next = head;
        head = newNode;
    return;
    }
    
    struct Node *temp = head;
    int i = 1;
    while(i<pos-1 && temp != NULL){
        temp = temp ->next;
        i++;
    }

    if(temp == NULL){
        printf("Entered position out of range !");
        free(newNode);
        return;
    }

    newNode -> next = temp -> next;
    temp -> next = newNode;
    return head;
}

void printlist(struct Node *head){
    struct Node *temp = head;
    printf("Linked List Elements : \n");
    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL \n");
}

int main(){
    struct Node *head = NULL;
    int size;
    int value;

    printf("Enter size of your linked list : ");
    scanf("%d", &size);

    for(int i = 1; i<=size; i++){
        printf("Enter element %d : ", i);
        scanf("%d", &value);
        head = insertatEnd(head, value);
    }

    printf("Original List : \n");
    printlist(head);
    
    // printf("Enter value you want to enter at beginning : ");
    // scanf("%d", &value);
    // head = insertatbeginning(head, value);
    
    // printf("New List : \n");
    // printlist(head);

    // int pos;
    // printf("Enter a position you want to insert your element at : ");
    // scanf("%d", &pos);

    // printf("Enter element you want to insert at position %d : ", pos);
    // scanf("%d", &value);

    // head = insertAtPosition(head, value, pos);

    // printf("New List : \n");
    // printlist(head);

    

    return 0;
}


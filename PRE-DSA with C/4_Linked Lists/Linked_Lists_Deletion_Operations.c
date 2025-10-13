#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertatEnd(struct Node **head, int value){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while(temp -> next != NULL){
        temp = temp ->next;
    }

    temp -> next = newNode;
}

void deleteatBeginning(struct Node **head){
    if(*head == NULL){
        printf("Linked List is empty !!");
        return;
    }

    struct Node *temp = *head;
    *head = (*head) -> next;
    printf("Deleted element : %d\n", temp->data);
    free(temp);
}

void printList(struct Node **head){
    struct Node *temp = *head;
    printf("Linked Lists Elements : \n");
    while(temp != NULL){
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main(){
    struct Node *head = NULL;
    int n , value;

    printf("Enter the size of the linked list : ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        printf("Enter element %d : ", i);
        scanf("%d", &value);
        insertatEnd(&head, value);
    }
    printf("Original List : \n");
    printList(&head);

    deleteatBeginning(&head);
    printf("New List : \n");
    printList(&head);

    return 0;
}

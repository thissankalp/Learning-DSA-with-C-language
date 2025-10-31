#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node * insertatEnd(struct Node *head, int value){
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(head == NULL){
        return newNode;
    }

    struct Node *temp = head;
    while(temp -> next != NULL){
        temp = temp ->next;
    }
    temp -> next = newNode;
    return head;
}

struct Node * deleteatBeginning(struct Node *head){
    if(head == NULL){
        printf("Linked List is empty !!");
        return 0;
    }

    struct Node *temp = head;
    head = (head) -> next;
    printf("Deleted element : %d\n", temp->data);
    free(temp);
    return head;
}

struct Node * deleteatEnd(struct Node *head){
    if(head == NULL){
        printf("Linked List is empty !!");
        return NULL;
    }

    if(head -> next == NULL){
        printf("Deleted element : %d\n", head -> data);
        free(head);
        return 0;
    }

    struct Node *temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;
    return head;
}

struct Node * deleteatPosition(struct Node * head, int target){
    if(head == NULL){
        printf("Linked List is empty !!");
        return NULL;
    }

    struct Node * temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
        if(temp -> data == target){
            free(temp);
            
        }
    }


}

void printList(struct Node *head){
    struct Node *temp = head;
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
        head = insertatEnd(head, value);
    }
    printf("Original List : \n");
    printList(head);

    // head = deleteatBeginning(head);
    // printf("New List : \n");
    // printList(head);

    head = deleteatEnd(head); 
    printf("New List : \n");
    printList(head);

    return 0;
}



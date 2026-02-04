#include <stdio.h>
#include <stdlib.h>


struct Node{
    int data;
    struct Node *link;
};

void count(struct Node *head){
    struct Node *ptr = head;
    
    int count = 0;

    if(ptr == NULL){
        printf("%d", -1);
    }else{
        while(ptr != NULL){
        count++;
        ptr = ptr -> link;
        
        }

    }

    printf("%d", count);
}


void print(struct Node *head){
    struct Node *ptr = head;
    
    int count = 0;

    if(ptr == NULL){
        printf("%d", -1);
    }else{
        while(ptr != NULL){
            printf("%d ", ptr->data);
            count++;
            ptr = ptr -> link;
        }   
    }

    printf("\n Total elements%d", count);
}



void add_at_end(struct Node *head, int data){
    
    struct Node *ptr = head;


    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));   

    if(ptr == NULL){
        newNode -> data = data;
        newNode -> link = NULL;
        head = newNode;
        return;
    }

    while(ptr->link != NULL){
        ptr = ptr -> link;
    }

    ptr->link = newNode;
    newNode -> data = data;
    newNode -> link = NULL;

}

void addFront(struct Node *head, int data){
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));

    if(head == NULL){
        head = newNode;
        newNode-> data = data;
    }

    newNode-> link = head;
    newNode -> data = data;
    head = newNode;
}






int main(){

    struct Node *head = NULL;

    head = malloc(sizeof(struct Node));
    head->data = 45;
    head->link = NULL;

    struct Node *current = NULL;
    current = malloc(sizeof(struct Node));

    current -> data = 56;
    current-> link = NULL;
    head -> link = current;

    count(head);   
    
    add_at_end(head, 67);

    count(head);

    addFront(head, 99);

    print(head);

}



#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *link;
    
};
    
int count(struct node *head){
    int count = 0;
    struct node *ptr = head;

    if(ptr == NULL){
        printf("%d", -1);
    }

    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
}

void add_at_end(struct node *head, int data){
    struct node *newNode = malloc(sizeof(struct node));
    
    struct node *ptr = head;
    if(ptr == NULL){
        newNode -> data = data;
        head = newNode;
        return;
    }

    while(ptr != NULL){
        ptr = ptr-> link;
    }

    newNode -> data = data;
    ptr -> link = newNode;
}

int main(){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head ->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 55;
    current -> link = NULL;
    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 3;
    current -> link = NULL;

    head -> link -> link = current;
    count(head);

    add_at_end(head, 56);

    count(head);

}

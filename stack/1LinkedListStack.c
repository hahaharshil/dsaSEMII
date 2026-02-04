#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_EMPTY (-1) 

typedef struct Node{
    int data;
    struct Node *next;
} node;

node* head = NULL;

bool push(int val){
    node* newNode = malloc(sizeof(node));

    if(newNode == NULL) return false;

    newNode -> data = val;
    newNode -> next = head;
    head = newNode;

    return true;
}

int pop(){
    node* temp;
    if(head == NULL) return STACK_EMPTY;

    int result = head -> data;
    head = head -> next;

    return result;
}



int main(){
    
    int t = push(43);

    printf("%d \n", t);

    
    int ans = pop();

    printf("%d \n", ans);


    int ans1 = pop();

    printf("%d \n", ans1);
}




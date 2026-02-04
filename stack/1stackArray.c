#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 5
#define EMPTY (-1)

int stack[STACK_SIZE];
int top = EMPTY;

bool push(int value){
    if(top >= STACK_SIZE-1) return false;

    top++;
    stack[top] = value;
    return true;
}

int pop(){
    if(top == EMPTY) return (-1);

    int element = stack[top]; 
    top--;   

    return element;
}



int main(){

    push(56);
    push(67);
    push(45);

    for(int i = 0; i < STACK_SIZE; i++){
        
        int t = pop();

        printf("%d \n",t);
    }


}

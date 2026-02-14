#include <iostream>


class Node{
public: 
    int data; 
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};


class CircularList{
    Node* tail = nullptr;

public:
    void add_front(int val){
        Node* newNode = new Node(val);

        if(tail == nullptr){
            tail = newNode;
            newNode -> next = newNode;
        }else{
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);


        if(tail == nullptr){
            tail = newNode;
            tail -> next = tail;
        }else{
            newNode -> next = tail -> next;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void traverse(){
        if(tail == nullptr){
            std::cout << "CircularList empty" << std::endl;
        }else{
            Node* temp = tail -> next;
            do{
                std::cout << temp->data << std::endl;
                temp = temp -> next;
            }while(temp != tail -> next);
        }
    }

};


int main(){
    CircularList cl;

    cl.add_front(45);
    cl.add_front(56);
    cl.push_back(54);
    cl.traverse();
};
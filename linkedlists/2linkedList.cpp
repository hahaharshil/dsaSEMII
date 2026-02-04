#include <iostream> 

using namespace std;


class Node{
    public:
        int data;
        Node* link;
        
        Node(int val){
            int data = val;
            int* link = NULL;
        }
};


class List{
    public:
        Node* head;
        Node* tail;

        List(){
            head = tail = NULL;
        }

        void print(){
            Node* temp = head;

            if(temp == NULL){
                cout << "No elements" << endl;
              }else{
                while(temp != NULL){
                    cout << temp->data << endl;
                    temp = temp->link;
                }
            }
        }


        int size(){
            Node* temp = head;
            if(temp = NULL){
                return 0;
            }else{
                int count = 0;
                while(temp != NULL){
                    count++;
                    temp = temp -> link;
                }
            return count;
            }
        }


        void push_back(int val){
            Node* newNode = new Node(val);

            if(head == NULL){
                newNode -> data = val;
                head = tail = newNode;
            }else{
                newNode -> data = val;
                tail-> link = newNode;
                tail = newNode;
            }
        }
    };
        
int main(){

    List ll;

    ll.print();

    ll.push_back(23);
    ll.push_back(43);

    cout << ll.size() << endl;

    ll.print();

}



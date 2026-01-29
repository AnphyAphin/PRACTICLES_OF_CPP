#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    ////////////////// Constructor ////////////
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }

    //////////// Function to traverse the linked list ////////////
    ////////////Iterative Approach ////////////
    void traverseList(Node* head){
        while(head != nullptr){
            cout << head->data << " -> ";
            head = head->next;
        }
        cout << endl;
    }    
};

int main (){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    ///////// Traverse and print the linked list /////////
    head->traverseList(head);
    return 0;
}
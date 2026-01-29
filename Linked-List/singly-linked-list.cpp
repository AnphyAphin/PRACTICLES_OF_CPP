#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //////////// Constructor ////////////
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    ///////// Print the linked list /////////
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;    
    }
    cout << "NULL" << endl;
}
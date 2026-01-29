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
};

///////////////// Traversal Function ////////////
/////////////////Recursive Approach ////////////
void traverseLinkedList(Node* head) {
    // Base Case
    if (head == nullptr) {
        return;
    }
    // Process Current Node
    cout << head->data << " ";
    // Recursive Call for Next Node
    traverseLinkedList(head->next);
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    traverseLinkedList(head);
    return 0;
}
#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
////////////////////// Insertion at Specific Position //////////////////////
Node* insertAtPosition(Node* head, int pos, int data) {
    if (pos < 1)
    return head;

    if (pos == 1) {
        Node* newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *current = head;
    for (int i = 1; i < pos - 1 && current != nullptr; i++) {
        current = current->next;
}
if(current == nullptr) {
    return head;
}
    Node* newNode = new Node(data);
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    int data = 15, pos = 2;
    head = insertAtPosition(head, pos, data);
    printList(head);

    head = insertAtPosition(head, 1, 5);
    cout << "After inserting 5 at position 1: ";
    printList(head);

    return 0;
}
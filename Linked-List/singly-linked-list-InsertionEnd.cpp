#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a new node with data
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

////////////////////// Insertion at End //////////////////////
Node *insertAtEnd(Node *head, int x){
    Node *newNode = new Node(x);
    if(head == nullptr){
        return newNode;
    }
    Node *last = head;
    while(last->next != nullptr){
        last = last->next;  
    }
    last->next = newNode;
    return head;
}

void printList(Node *node){
    while(node !=nullptr){
        cout << node -> data << " ";
        node = node -> next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 20);

    printList(head); 

    return 0;
}
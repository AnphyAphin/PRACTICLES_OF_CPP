#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    ////////////////////// Constructor //////////////////////
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

////////////////////// Insertion at Beginning //////////////////////
Node *insertAtBeginning(Node *head, int x)
{
    Node *newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

////////////////////// Print Linked List //////////////////////
void printList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main()
{
    Node *head = new Node(2);
    head->next = new Node(3);

    int x = 1;
    head = insertAtBeginning(head, x);
    head = insertAtBeginning(head, 0);
    printList(head);
    return 0;
}
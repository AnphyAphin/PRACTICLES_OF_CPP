#include <iostream>
using namespace std;

struct Node
{
    string car;
    Node* next;
};

int main(){
    Node* top = nullptr;

    // Push elements onto the stack
    Node* newNode1 = new Node{"Toyota", NULL};
    newNode1->next = top;
    top = newNode1;

    Node* newNode2 = new Node{"Corrona", NULL};
    newNode2->next = top;
    top = newNode2;

    Node* newNode3 = new Node{"Honda", NULL};
    newNode3->next = top;
    top = newNode3;

    // Pop elements from the stack
    while (top != nullptr) {
        cout << top->car << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    return 0;
}
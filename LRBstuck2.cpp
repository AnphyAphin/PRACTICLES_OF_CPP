#include <iostream>
#include <string>
using namespace std;

struct Node {
    string car;
    Node* next;
};

int main() {
    Node* top = nullptr;
    string input;

    cout << "Enter car names to add to the stack (type 'stop' to finish):" << endl;

    // --- DYNAMIC PUSH LOOP ---
    while (true) {
        cout << "> ";
        cin >> input;
    

        if (input == "stop") break;

        // The "Best Practice" Logic:
        Node* newNode = new Node; // Create memory
        newNode->car = input;     // Assign data
        newNode->next = top;      // Connect to old stack
        top = newNode;            // Move top to the new node
    }

    // --- PRINTING THE RESULT ---
    cout << "\nYour Stack (Last-In, First-Out):" << endl;
    Node* accumulator = top;
    while (accumulator != nullptr) {
        cout << "| " << accumulator->car << " |" << endl;
        accumulator = accumulator->next;
    }
    cout << "  [Floor]  " << endl;

    return 0;
}
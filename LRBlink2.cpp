#include <iostream>
using namespace std;

struct Person{
    string name;
    Person* next;
};
int main(){
    Person* head = new Person{"Anna", nullptr};
    Person* nodeA = new Person{"Annie", nullptr};
    Person* nodeB = new Person{"Anny", nullptr};

    head->next = nodeA;
    nodeA->next = nodeB;

    Person* current = head;
    while(current != nullptr){
        cout << current->name << endl;
        current = current->next;    
    }
    return 0;
}
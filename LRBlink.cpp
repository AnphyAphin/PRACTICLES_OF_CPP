#include <iostream>
using namespace std;

struct Person{
    string name;
    Person* next;
};

int main(){
    Person* head = new Person{"Anna", NULL};
    head->next = new Person{"Annie",NULL};
    head->next->next = new Person{"Anny", NULL};

    Person* current = head;
    while(current != NULL){
        cout << current->name << endl;
        current = current->next;    
    }
    return 0;
}
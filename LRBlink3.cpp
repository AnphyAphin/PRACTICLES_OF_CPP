#include <iostream>
using namespace std;

struct LRBlink3
{
    string car;
    LRBlink3* move;
};

int main(){
    LRBlink3* head = new LRBlink3{"toyota", nullptr};
    LRBlink3* car2 = new LRBlink3{"corrona", NULL};
    LRBlink3* car3 = new LRBlink3{"roiseroise", NULL};

    head->move = car2;
    car2->move = car3;

    LRBlink3* accumolator = head;
    while (accumolator != NULL)
    {
        cout << accumolator << endl;
        cout << accumolator->car << endl;
        accumolator = accumolator->move;
    }
    return 0; 
}
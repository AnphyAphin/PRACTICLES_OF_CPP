#include <iostream>
using namespace std;

struct parent
{
    string name;
    parent *next;
};

int main()
{
    parent *top = NULL;
    string inputData;

    while (true)
    {
        cin >> inputData;
        if (inputData == "stop")
        {
            break;
        }
        parent *newNode = new parent;
        newNode->name = inputData;
        newNode->next = top;
        top = newNode;
    }

    parent *accumulator = top;
    while (accumulator != NULL)
    {
        cout << accumulator->name << endl;
        accumulator = accumulator->next;
    }

    // MEMORY CLEANUP (The Pop Loop)
    while (top != NULL)
    {
        parent *temp = top;
        top = top->next;
        delete temp;
    }
}
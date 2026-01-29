#include <iostream>
using namespace std;

struct Student
{
    int SN;
    string name;
    int age;
    float height;
};

int main(){
    Student X;
    Student *pX;
    pX = &X;

    Student Y;
    Student *pY;
    pY = &Y;

    cin >> (*pX).SN;
    cin >> pX->name;    
    cin >> pX->age;
    cin >> pX->height;

    cin >> (*pY).SN;
    cin >> pY->name;    
    cin >> pY->age;
    cin >> pY->height;

    cout << pX->age << " " << pX->name << " " 
    << pX->age << " " << pX->height << endl;
    
    cout << pY->age << " " << pY->name << " " 
    << pY->age << " " << (*pY).height << endl;
}
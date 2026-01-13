#include <iostream>
using namespace std;

struct Hostel
{
    int SN;
    string HostID;
    int RoomNo;
};

struct Student
{
    int SN;
    string name;
    int age;
    float height;
    Hostel ht;
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
    cin >> pX->ht.SN;
    cin >> pX->ht.HostID;
    cin >> pX->ht.RoomNo;

    cin >> (*pY).SN;
    cin >> pY->name;    
    cin >> pY->age;
    cin >> pY->height;
    cin >> pY->ht.SN;
    cin >> pY->ht.HostID;
    cin >> pY->ht.RoomNo;

    cout << pX->SN << " " << pX->name << " " 
    << pX->age << " " << pX->height << " "
    << pX->ht.SN << " " << pX->ht.HostID << " "
    << pX->ht.RoomNo << endl;       

    cout << pY->SN << " " << pY->name << " " 
    << pY->age << " " << pY->height << " "
    << pY->ht.SN << " " << pY->ht.HostID << " "
    << pY->ht.RoomNo << endl;
}
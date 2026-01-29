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
    Student st[2];

    for(int i = 0; i < 2; i++) {
        cin >> st[i].SN;
        cin >> st[i].name;
        cin >> st[i].age;
        cin >> st[i].height;
        cin >> st[i].ht.SN;
        cin >> st[i].ht.HostID;
        cin >> st[i].ht.RoomNo;
    }

    for(int i = 0; i < 2; i++) {
        cout << st[i].SN << " " << st[i].name << " " 
        << st[i].age << " " << st[i].height << " "
        << st[i].ht.SN << " " << st[i].ht.HostID << " "
        << st[i].ht.RoomNo << endl;
    }
}

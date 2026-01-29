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
    Student st[3];

    for(int i = 0; i < 3; i++) {
        cin >> st[i].SN;
        cin >> st[i].name;
        cin >> st[i].age;
        cin >> st[i].height;
    }

    for(int i = 0; i < 3; i++) {
        cout << st[i].SN << " " << st[i].name << " " 
        << st[i].age << " " << st[i].height << endl;
    }
}
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
    Student X, Y, Z;

    cin >> X.SN;
    cin >> X.name;
    cin >> X.age;
    cin >> X.height;

    cin >> Y.SN;
    cin >> Y.name;  
    cin >> Y.age;
    cin >> Y.height;

    cin >> Z.SN;
    cin >> Z.name;
    cin >> Z.age;
    cin >> Z.height;

    cout << X.SN << " " << X.name << " " << X.age << " " << X.height << endl;
    cout << Y.SN << " " << Y.name << " " << Y.age << " " << Y.height << endl;
    cout << Z.SN << " " << Z.name << " " << Z.age << " " << Z.height << endl;
}

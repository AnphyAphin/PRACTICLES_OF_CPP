#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> anna;

    anna.push(100);
    anna.push(200);
    anna.push(300);
    anna.push(400);

    while(!anna.empty()){
        cout << anna.front() << endl;
        anna.pop();
    }
    return 0;
}
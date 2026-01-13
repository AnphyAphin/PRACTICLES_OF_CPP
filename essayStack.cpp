#include <iostream>
#include <stack>     // The magic header
#include <vector>    // Optional for underlying container

using namespace std;
int main() {
    // THREE WAYS to declare stack:
    
    // 1. Default (uses deque internally)
    stack<int> stack1;
    
    // 2. With vector as underlying container
    stack<int, vector<int>> stack2;
    
    // 3. With list as underlying container
    stack<int, list<int>> stack3;
    
    return 0;
}
#include <iostream>
using namespace std;

long factorialRecursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
        cout << "Recursive Function:   " << factorialRecursive(num) << endl;
    return 0;
}